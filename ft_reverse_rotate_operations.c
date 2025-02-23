/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_operations.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:36:03 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 15:00:50 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *a, int w)
{
	if (!a || !a->top || !a->top->next)
		return ;
	ft_rotate(a, 1);
	if (w)
		write (1, "rra\n", 4);
}

void	ft_rrb(t_stack *b, int w)
{
	if (!b || !b->top || !b->top->next)
		return ;
	ft_rotate(b, 1);
	if (w)
		write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack *a, t_stack *b, int w)
{
	if (!a || !a->top || !a->top->next || !b || !b->top || !b->top->next)
		return ;
	ft_rotate(a, 1);
	ft_rotate(b, 1);
	if (w)
		write (1, "rrr\n", 4);
}
