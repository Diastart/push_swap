/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_shellv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:10:55 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 13:21:41 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse_shellv(char *str)
{
	t_stack		*stack;
	t_node		*new;
	t_node		*last;

	stack = ft_init_stack();
	if (!stack)
		return (NULL);
	last = NULL;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str)
		{
			new = ft_create_node(ft_atoi_with_error(&str));
			if (!ft_add_node_to_stack(stack, new, &last))
				return (ft_clean_stack(stack));
		}
	}
	return (stack);
}
