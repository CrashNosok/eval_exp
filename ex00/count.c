/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:06:08 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 22:07:01 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	count(t_stack_dig *stack_dig, t_stack_sign *stack_sign)
{
	int		res;
	int		temp1;
	int		temp2;
	char	sign;

	res = 0;
	temp2 = pop(stack_dig);
	temp1 = pop(stack_dig);
	sign = pop_char(stack_sign);
	if (sign == '+')
		res = temp1 + temp2;
	else if (sign == '-')
		res = temp1 - temp2;
	else if (sign == '*')
		res = temp1 * temp2;
	else if (sign == '/')
		res = temp1 / temp2;
	else if (sign == '%')
		res = temp1 % temp2;
	push(stack_dig, res);
}
