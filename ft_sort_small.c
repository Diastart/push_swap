/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:15:08 by Dias              #+#    #+#             */
/*   Updated: 2025/02/13 13:39:04 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	ft_find_min_pos(t_stack *stack)
{
	t_node			*current;
	int				min_value;
	unsigned int	pos;
	unsigned int	min_pos;

	if (!stack || !stack->top)
		return (0);
	current = stack->top;
	min_value = current->value;
	pos = 0;
	min_pos = 0;
	while (current)
	{
		if (current->value < min_value)
		{
			min_value = current->value;
			min_pos = pos;
		}
		pos++;
		current = current->next;
	}
	return (min_pos);
}

static void	ft_sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !a->top || !a->top->next || !a->top->next->next)
		return ;
	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		ft_sa(a);
	else if (first > second && second > third)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(a);
	else if (first < second && second > third && first < third)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (first < second && second > third && first > third)
		ft_rra(a);
}

static void	ft_sort_four(t_stack *a, t_stack *b)
{
	unsigned int	min_pos;

	min_pos = ft_find_min_pos(a);
	if (min_pos == 1)
		ft_ra(a);
	else if (min_pos == 2)
	{
		ft_ra(a);
		ft_ra(a);
	}
	else if (min_pos == 3)
		ft_rra(a);
	ft_pb(a, b);
	ft_sort_three(a);
	ft_pa(a, b);
}

static void	ft_sort_five(t_stack *a, t_stack *b)
{
	unsigned int	min_pos;

	min_pos = ft_find_min_pos(a);
	if (min_pos == 1)
		ft_ra(a);
	else if (min_pos == 2)
	{
		ft_ra(a);
		ft_ra(a);
	}
	else if (min_pos == 3)
	{
		ft_rra(a);
		ft_rra(a);
	}
	else if (min_pos == 4)
		ft_rra(a);
	ft_pb(a, b);
	ft_sort_four(a, b);
	ft_pa(a, b);
}

void	ft_sort_small(t_stack *a, t_stack *b)
{
	if (a->size == 2 && a->top->value > a->top->next->value)
		ft_sa(a);
	else if (a->size == 3)
		ft_sort_three(a);
	else if (a->size == 4)
		ft_sort_four(a, b);
	else if (a->size == 5)
		ft_sort_five(a, b);
}
