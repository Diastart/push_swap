/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:03:48 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 13:01:21 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_create_node(t_number number)
{
	t_node	*new;

	if (number.error)
		return (NULL);
	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = (int)number.value;
	new->next = NULL;
	return (new);
}
