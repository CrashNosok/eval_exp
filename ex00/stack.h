/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahillary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:39:25 by ahillary          #+#    #+#             */
/*   Updated: 2019/07/21 22:05:30 by ahillary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# define STACK_H
# define STACK_MAX_SIZE 20
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_stack_dig
{
	int				data[STACK_MAX_SIZE];
	unsigned int	size;
}					t_stack_dig;

typedef struct		s_stack_sign
{
	char			data[STACK_MAX_SIZE];
	unsigned int	size;
}					t_stack_sign;

void				push(t_stack_dig *stack, int val);
void				push_char(t_stack_sign *stack, char sign);
int					pop(t_stack_dig *stack);
char				pop_char(t_stack_sign *stack);
int					peek(t_stack_dig *stack);
char				peek_char(t_stack_sign *stack);
int					priority(char ch);
void				ft_putnbr(int nb);
int					space_skip(char *str);
int					take_number(char *str);
int					digit_skip(char *str);
void				ft_putchar(char c);
void				count(t_stack_dig *stack_dig, t_stack_sign *stack_sign);
void				foo_for_sings(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig, char *str);
void				foo_for_bracket(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig, char *str);
void				foo_for_digits(t_stack_dig *stack_dig, char *str);
void				foo_for_null(t_stack_sign *stack_sign,
		t_stack_dig *stack_dig);
int					ft_strlen(char *str);
int					ft_strlen(char *str);
void				ft_putchar(char c);
int					eval_expr(char *str);

#endif
