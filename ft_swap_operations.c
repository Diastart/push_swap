/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:25:12 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 15:01:50 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	first = stack->top;
	second = first->next;
	third = second->next;
	first->next = third;
	second->next = first;
	stack->top = second;
}

void	ft_sa(t_stack *a, int w)
{
	if (!a || !a->top || !a->top->next)
		return ;
	ft_swap(a);
	if (w)
		write (1, "sa\n", 3);
}

void	ft_sb(t_stack *b, int w)
{
	if (!b || !b->top || !b->top->next)
		return ;
	ft_swap(b);
	if (w)
		write (1, "sb\n", 3);
}

void	ft_ss(t_stack *a, t_stack *b, int w)
{
	if (!a || !a->top || !a->top->next || !b || !b->top || !b->top->next)
		return ;
	ft_swap(a);
	ft_swap(b);
	if (w)
		write (1, "ss\n", 3);
}
