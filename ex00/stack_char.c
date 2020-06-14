/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:31:59 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 19:39:39 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push_char(t_stack_sign *stack, char sign)
{
	if (stack->size >= STACK_MAX_SIZE)
		return ;
	stack->data[stack->size] = sign;
	stack->size++;
}

char	pop_char(t_stack_sign *stack)
{
	if (stack->size == 0)
		return (0);
	stack->size--;
	return (stack->data[stack->size]);
}

char	peek_char(t_stack_sign *stack)
{
	if (stack->size <= 0)
		return (0);
	return (stack->data[stack->size - 1]);
}
