/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:47:26 by Dias              #+#    #+#             */
/*   Updated: 2025/02/13 12:53:09 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_index(t_stack *stack)
{
	t_node			*current_node;
	t_node			*iteration_node;
	unsigned int	index;

	if (!stack || !stack->top)
		return ;
	current_node = stack->top;
	while (current_node)
	{
		iteration_node = stack->top;
		index = 0;
		while (iteration_node)
		{
			if (current_node->value > iteration_node->value)
				index++;
			iteration_node = iteration_node->next;
		}
		current_node->index = index;
		current_node = current_node->next;
	}
}
