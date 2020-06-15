#include "stack.h"

int		priority(char ch)
{
	if (ch == '+' || ch == '-')
		return (1);
	else if (ch == '/' || ch == '%' || ch == '*')
		return (2);
	else
		return (-1);
}

void	ft_putnbr(int nb)
{
	if (nb < -2147483648 || nb > 2147483647)
	{
		return ;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int		space_skip(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	return (i);
}

int		digit_skip(char *str)
{
	int i;

	i = 0;
	while (str[i] > 47 && str[i] < 58 && str[i] != '\0')
		i++;
	return (i);
}

int		take_number(char *str)
{
	int	i;
	int nu;

	nu = 0;
	i = 0;
	while (str[i] > 47 && str[i] < 58 && str[i])
	{
		nu = nu * 10 + (str[i] - 48);
		i++;
	}
	return (nu);
}
