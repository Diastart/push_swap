/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:04:42 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 15:43:38 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sanitize(t_stack *a)
{
	if (!a || !a->top || ft_check_duplicates(a))
	{
		write (2, "Error\n", 6);
		ft_clean_stack(a);
		return (0);
	}
	if (ft_is_sorted(a))
	{
		ft_clean_stack(a);
		return (0);
	}
	return (1);
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = ft_parse(av);
	if (!ft_sanitize(a))
		return (0);
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
