#include "push_swap.h"

t_stack	*parse(int ac, char *av[])
{
	if (ac < 2)
		return (NULL);
	if (ac == 2 && ft_strchr(av[1], ' '))
		return (parse_ARG(av[1]));
	return (parse_args(ac, av));
}