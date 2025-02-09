/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:43:36 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 12:47:11 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	t_node	*current;

	if (!stack)
	{
		printf("Stack is empty!\n");
		return ;
	}
	if (!stack->top)
	{
		printf("Top is empty\n");
		return ;
	}
	current = stack->top;
	printf("Size: %d and chain is: ", stack->size);
	while (current)
	{
		printf("%d -> ", current->value);
		current = current->next;
	}
	printf("NULL\n");
}
