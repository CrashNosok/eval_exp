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
