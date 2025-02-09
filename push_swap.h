/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:00:43 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 13:25:25 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <limits.h>

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

typedef struct s_number
{
	long	value;
	int		error;
}				t_number;

t_stack		*ft_parse(int ac, char *av[]);
int			ft_strchr(char *str, char c);
t_stack		*ft_parse_shellv(char *str);
t_number	ft_atoi_with_error(char **str);
t_node		*ft_create_node(t_number number);
t_stack		*ft_clean_stack(t_stack *stack);
void		ft_print_stack(t_stack *stack);
t_stack		*ft_init_stack(void);
int			ft_add_node_to_stack(t_stack *stack, t_node *new, t_node **last);

#endif
