#include "push_swap.h"

t_stack *parse_ARG(char *str)
{
	t_stack	*stack;
	t_node	*new;
	t_node	*last;
	int		i;
	int		error;

	if (!validate(str))
		return (NULL);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	last = NULL;

	i = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			new = create_node(ft_atoi(str, &i, &error));
			if (error || !new)
			{
				clean_stack(stack);
				return (NULL);
			}
			// Add node to end of stack
			if (!stack->top)  // If stack is empty
				stack->top = new;
			else             // If stack has nodes
				last->next = new;
			last = new;     // Update last to new node
			stack->size++;
		}
	}
	return (stack);
}