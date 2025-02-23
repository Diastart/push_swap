/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:12:33 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 14:34:22 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse(char *av[])
{
	t_stack		*stack;
	t_node		*new;
	t_node		*last;
	char		*str;

	stack = ft_init_stack();
	if (!stack)
		return (NULL);
	last = NULL;
	while (*(++av))
	{
		str = *av;
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
	}
	return (stack);
}
