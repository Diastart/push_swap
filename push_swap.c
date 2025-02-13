/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:04:42 by Dias              #+#    #+#             */
/*   Updated: 2025/02/13 15:24:14 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = ft_parse(av);
	if (!a || !a->top || ft_is_sorted(a))
		return (0);
	if (a != NULL && ft_check_duplicates(a))
	{
		ft_clean_stack(a);
		write(1, "Error\n", 6);
		return (0);
	}
	b = ft_init_stack();
	if (!b)
	{
		ft_clean_stack(a);
		return (0);
	}
	ft_sort(a, b);
	ft_clean_stack(a);
	ft_clean_stack(b);
	return (0);
}
