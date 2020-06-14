/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_foo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:54:28 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 22:02:47 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
