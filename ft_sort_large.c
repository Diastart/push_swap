/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_large.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:12:31 by Dias              #+#    #+#             */
/*   Updated: 2025/02/13 15:23:07 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_process_a(t_stack *a, t_stack *b, unsigned int s, unsigned int q)
{
	unsigned int	i;

	i = 0;
	while (i < s)
	{
		if (((a->top->index >> q) & 1) == 0)
			ft_ra(a);
		else
		{
			ft_pb(a, b);
			ft_rb(b);
		}
		i++;
	}
}

static void	ft_process_b(t_stack *a, t_stack *b, unsigned int s, unsigned int q)
{
	unsigned int	i;

	i = 0;
	while (i < s)
	{
		if (((b->top->index >> q) & 1) == 1)
			ft_rb(b);
		else
		{
			ft_pa(a, b);
			ft_ra(a);
		}
		i++;
	}
}

void	ft_sort_large(t_stack *a, t_stack *b)
{
	unsigned int	bit;
	unsigned int	max_bits;
	unsigned int	size_a;
	unsigned int	size_b;

	ft_assign_index(a);
	max_bits = ft_bits(a->size - 1);
	bit = 0;
	while (bit < max_bits)
	{
		size_a = a->size;
		size_b = b->size;
		ft_process_a(a, b, size_a, bit);
		ft_process_b(a, b, size_b, bit);
		bit++;
	}
	while (b->size > 0)
	{
		ft_pa(a, b);
		ft_ra(a);
	}
}
