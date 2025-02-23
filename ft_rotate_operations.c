/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:31:21 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 15:01:18 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *a, int w)
{
	if (!a || !a->top || !a->top->next)
		return ;
	ft_rotate(a, 0);
	if (w)
		write (1, "ra\n", 3);
}

void	ft_rb(t_stack *b, int w)
{
	if (!b || !b->top || !b->top->next)
		return ;
	ft_rotate(b, 0);
	if (w)
		write (1, "rb\n", 3);
}

void	ft_rr(t_stack *a, t_stack *b, int w)
{
	if (!a || !a->top || !a->top->next || !b || !b->top || !b->top->next)
		return ;
	ft_rotate(a, 0);
	ft_rotate(b, 0);
	if (w)
		write (1, "rr\n", 3);
}
