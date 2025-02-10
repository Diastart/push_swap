/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_operations.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:03 by Dias              #+#    #+#             */
/*   Updated: 2025/02/10 12:39:15 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *a)
{
	if (!a || !a->top || !a->top->next)
		return ;
	ft_rotate(a, 1);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_stack *b)
{
	if (!b || !b->top || !b->top->next)
		return ;
	ft_rotate(b, 1);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	if (!a || !a->top || !a->top->next || !b || !b->top || !b->top->next)
		return ;
	ft_rotate(a, 1);
	ft_rotate(b, 1);
	write (1, "rrr\n", 4);
}
