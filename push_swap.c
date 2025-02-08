#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = parse(ac, av);
	b = NULL;

	print_stack(a);
}