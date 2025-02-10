/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:01:33 by Dias              #+#    #+#             */
/*   Updated: 2025/02/10 12:13:49 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack *sender, t_stack *receiver)
{
	t_node	*temp;

	temp = sender->top;
	sender->top = sender->top->next;
	sender->size--;
	temp->next = receiver->top;
	receiver->top = temp;
	receiver->size++;
}

void	ft_pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (!b || !b->top)
		return ;
	ft_push(b, a);
	write (1, "pa\n", 3);
}

void	ft_pb(t_stack *a, t_stack *b)
{
	if (!a || !a->top)
		return ;
	ft_push(a, b);
	write (1, "pb\n", 3);
}
