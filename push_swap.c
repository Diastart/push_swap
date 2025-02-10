/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:04:42 by Dias              #+#    #+#             */
/*   Updated: 2025/02/10 10:44:32 by Dias             ###   ########.fr       */
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
	if (a != NULL && ft_check_duplicates(a))
	{
		ft_clean_stack(a);
		write (1, "Error\n", 6);
		return (0);
	}
	b = NULL;
	ft_print_stack(a);
}
