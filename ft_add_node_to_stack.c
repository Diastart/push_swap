/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_to_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:21:56 by Dias              #+#    #+#             */
/*   Updated: 2025/02/13 15:20:23 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_add_node_to_stack(t_stack *stack, t_node *nw, t_node **last)
{
	if (!nw)
		return (0);
	if (!stack->top)
		stack->top = nw;
	else
		(*last)->next = nw;
	*last = nw;
	stack->size++;
	return (1);
}
