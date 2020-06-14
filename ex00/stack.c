/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:44:20 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 19:39:07 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push(t_stack_dig *stack, int val)
{
	if (stack->size >= STACK_MAX_SIZE)
		return ;
	stack->data[stack->size] = val;
	stack->size++;
}

int		pop(t_stack_dig *stack)
{
	if (stack->size == 0)
		return (0);
	stack->size--;
	return (stack->data[stack->size]);
}

int		peek(t_stack_dig *stack)
{
	if (stack->size <= 0)
		return (0);
	return (stack->data[stack->size - 1]);
}
