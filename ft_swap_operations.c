/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:25:12 by Dias              #+#    #+#             */
/*   Updated: 2025/02/10 13:03:20 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_node *first, t_node *second)
{
	int	temp;

	temp = first->value;
	first->value = second->value;
	second->value = temp;
}

void	ft_sa(t_stack *a)
{
	if (!a || !a->top || !a->top->next)
		return ;
	ft_swap(a->top, a->top->next);
	write (1, "sa\n", 3);
}

void	ft_sb(t_stack *b)
{
	if (!b || !b->top || !b->top->next)
		return ;
	ft_swap(b->top, b->top->next);
	write (1, "sb\n", 3);
}

void	ft_ss(t_stack *a, t_stack *b)
{
	if (!a || !a->top || !a->top->next || !b || !b->top || !b->top->next)
		return ;
	ft_swap(a->top, a->top->next);
	ft_swap(b->top, b->top->next);
	write (1, "ss\n", 3);
}
