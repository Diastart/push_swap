/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:00:43 by Dias              #+#    #+#             */
/*   Updated: 2025/02/12 18:31:13 by Dias             ###   ########.fr       */
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

t_stack		*ft_parse(char *av[]);
int			ft_strchr(char *str, char c);
t_number	ft_atoi_with_error(char **str);
t_node		*ft_create_node(t_number number);
t_stack		*ft_clean_stack(t_stack *stack);
void		ft_print_stack(t_stack *stack);
t_stack		*ft_init_stack(void);
int			ft_is_sorted(t_stack *stack);
int			ft_add_node_to_stack(t_stack *stack, t_node *new, t_node **last);
int			ft_check_duplicates(t_stack *stack);
t_number	ft_return_error(void);
void		ft_sa(t_stack *a);
void		ft_sb(t_stack *b);
void		ft_ss(t_stack *a, t_stack *b);
void		ft_pa(t_stack *a, t_stack *b);
void		ft_pb(t_stack *a, t_stack *b);
void		ft_rotate(t_stack *stack, int is_reverse);
void		ft_ra(t_stack *a);
void		ft_rb(t_stack *b);
void		ft_rr(t_stack *a, t_stack *b);
void		ft_rra(t_stack *a);
void		ft_rrb(t_stack *b);
void		ft_rrr(t_stack *a, t_stack *b);

#endif
