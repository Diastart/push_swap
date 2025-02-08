#include "push_swap.h"

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	validate(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '+' && str[i] != '-' && str[i] != ' '
			&& (str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str, int *i, int *error)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	*error = 0;
	if (!str[*i])
	{
		*error = 1;
		return (0);
	}
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
		if (str[*i] == '+' || str[*i] == '-')
		{
			*error = 1;
			return (0);
		}
	}
	while (str[*i] && str[*i] >= '0' && str[*i] <= '9')
	{
		num = num * 10 + (str[*i] - '0');
		(*i)++;
	}
	if (str[*i] != '\0' && str[*i] != ' ')
	{
		*error = 1;
		return (0);
	}
	return (num * sign);
}

t_node *create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

void clean_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	if (!stack)
		return ;
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}