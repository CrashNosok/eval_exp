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
