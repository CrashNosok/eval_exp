/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:06:24 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 22:10:25 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int g_c = 0;

void	foo_for_sings(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig, char *str)
{
	if (str[g_c] == '-')
	{
		if (stack_dig->size == 0)
			push(stack_dig, 0);
	}
	if (stack_sign->size == 0 || peek_char(stack_sign) == '(' ||
		priority(str[g_c]) > priority(peek_char(stack_sign)))
	{
		push_char(stack_sign, str[g_c]);
		g_c++;
	}
	else
		count(stack_dig, stack_sign);
}

void	foo_for_bracket(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig, char *str)
{
	int temp;

	temp = g_c + 1;
	if (str[g_c] == '(')
	{
		push_char(stack_sign, str[g_c]);
		g_c++;
	}
	if (str[g_c] == ')')
	{
		while (peek_char(stack_sign) != '(')
			count(stack_dig, stack_sign);
		pop_char(stack_sign);
		g_c++;
	}
}

void	foo_for_digits(t_stack_dig *stack_dig, char *str)
{
	push(stack_dig, take_number(&str[g_c]));
	g_c = g_c + digit_skip(&str[g_c]);
}

void	foo_for_null(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig)
{
	while (stack_dig->size != 1)
	{
		count(stack_dig, stack_sign);
		g_c++;
	}
	g_c++;
}

int		eval_expr(char *str)
{
	int				res;
	t_stack_dig		stack_dig;
	t_stack_sign	stack_sign;

	stack_dig.size = 0;
	stack_sign.size = 0;
	res = 0;
	while (g_c <= ft_strlen(str))
	{
		if (str[g_c] == ' ')
			g_c = g_c + space_skip(&str[g_c]);
		else if (str[g_c] > 47 && str[g_c] < 58 && str[g_c])
			foo_for_digits(&stack_dig, str);
		else if (str[g_c] == '+' || str[g_c] == '-' || str[g_c] == '/'
				|| str[g_c] == '*' || str[g_c] == '%')
			foo_for_sings(&stack_sign, &stack_dig, str);
		else if (str[g_c] == '(' || str[g_c] == ')')
			foo_for_bracket(&stack_sign, &stack_dig, str);
		else if (str[g_c] == '\0')
			foo_for_null(&stack_sign, &stack_dig);
	}
	return (peek(&stack_dig));
}
