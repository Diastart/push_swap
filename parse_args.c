#include "push_swap.h"

t_stack *parse_args(int ac, char **av)
{
	t_stack *stack;
	t_node  *new;
	t_node  *last;
	int     i;
	int		error;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	last = NULL;

	i = 1;
	while (i < ac)
	{
		if (!validate(av[i]) || ft_strchr(av[i], ' '))
		{
			clean_stack(stack);
			return (NULL);
		}
		new = create_node(ft_atoi(av[i], &(int){0}, &error)); 
		if (error || !new)
		{
			clean_stack(stack);
			return (NULL);
		}
		if (!stack->top)
			stack->top = new;
		else
			last->next = new;
		last = new;
		stack->size++;
		i++;
	}
	return (stack);
}