/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dias <dias@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:07:28 by Dias              #+#    #+#             */
/*   Updated: 2025/02/23 15:03:13 by dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

static int	ft_execute_instruction(char *line, t_stack *a, t_stack *b)
{
	if (!ft_strncmp(line, "sa\n", 3))
		ft_sa(a, 0);
	else if (!ft_strncmp(line, "sb\n", 3))
		ft_sb(b, 0);
	else if (!ft_strncmp(line, "ss\n", 3))
		ft_ss(a, b, 0);
	else if (!ft_strncmp(line, "pa\n", 3))
		ft_pa(a, b, 0);
	else if (!ft_strncmp(line, "pb\n", 3))
		ft_pb(a, b, 0);
	else if (!ft_strncmp(line, "ra\n", 3))
		ft_ra(a, 0);
	else if (!ft_strncmp(line, "rb\n", 3))
		ft_rb(b, 0);
	else if (!ft_strncmp(line, "rr\n", 3))
		ft_rr(a, b, 0);
	else if (!ft_strncmp(line, "rra\n", 4))
		ft_rra(a, 0);
	else if (!ft_strncmp(line, "rrb\n", 4))
		ft_rrb(b, 0);
	else if (!ft_strncmp(line, "rrr\n", 4))
		ft_rrr(a, b, 0);
	else
		return (0);
	return (1);
}

static void	ft_check_result(t_stack *a, t_stack *b)
{
	if (ft_is_sorted(a) && b->size == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

static void	ft_process_instructions(t_stack *a, t_stack *b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!ft_execute_instruction(line, a, b))
		{
			free(line);
			ft_clean_stack(a);
			ft_clean_stack(b);
			write(2, "Error\n", 6);
			exit(0);
		}
		free(line);
		line = get_next_line(0);
	}
	ft_check_result(a, b);
}

static t_stack	*ft_init_checker(int ac, char **av, t_stack **b)
{
	t_stack	*a;

	if (ac < 2)
		exit(0);
	a = ft_parse(av);
	if (!a || ft_check_duplicates(a))
	{
		ft_clean_stack(a);
		write(2, "Error\n", 6);
		exit(0);
	}
	*b = ft_init_stack();
	if (!*b)
	{
		ft_clean_stack(a);
		exit(0);
	}
	return (a);
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = ft_init_checker(ac, av, &b);
	ft_process_instructions(a, b);
	ft_clean_stack(a);
	ft_clean_stack(b);
	return (0);
}
