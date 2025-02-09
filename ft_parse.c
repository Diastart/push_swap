/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:04:58 by Dias              #+#    #+#             */
/*   Updated: 2025/02/09 12:57:36 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_parse(int ac, char *av[])
{
	if (ac < 2)
		return (NULL);
	if (ac == 2 && ft_strchr(av[1], ' '))
		return (ft_parse_shellv(av[1]));
	return (NULL);
}

// return (ft_parse_args)
