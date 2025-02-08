#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_node  *current;

	if (!stack)
	{
		printf("Stack is NULL\n");
		return ;
	}
	if (!stack->top)
	{
		printf("Stack is empty\n");
		return ;
	}
	current = stack->top;
	printf("Stack (size %d): ", stack->size);
	while (current)
	{
		printf("%d -> ", current->value);
		current = current->next;
	}
	printf("NULL");
	printf("\n");
}