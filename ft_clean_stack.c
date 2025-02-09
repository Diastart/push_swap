/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:05:36 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 12:20:16 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_clean_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack)
		return (NULL);
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free (stack);
	return (NULL);
}
