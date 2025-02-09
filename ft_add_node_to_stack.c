/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:21:56 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 13:27:04 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_add_node_to_stack(t_stack *stack, t_node *new, t_node **last)
{
	if (!new)
		return (0);
	if (!stack->top)
		stack->top = new;
	else
		(*last)->next = new;
	*last = new;
	stack->size++;
	return (1);
}
