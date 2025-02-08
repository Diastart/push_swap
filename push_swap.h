/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:00:43 by Dias              #+#    #+#             */
/*   Updated: 2025/02/08 15:51:10 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}				t_stack;

t_stack	*parse(int ac, char *av[]);
t_stack	*parse_ARG(char *str);
t_stack *parse_args(int ac, char **av);
int		ft_strchr(char *str, char c);
int		validate(char *str);
int		ft_atoi(char *str, int *i, int *error);
t_node	*create_node(int value);
void	clean_stack(t_stack *stack);
void	print_stack(t_stack *stack);

#endif