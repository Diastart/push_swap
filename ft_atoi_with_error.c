/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dias <dinursul@student.42.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:33:55 by Dias              #+#    #+#             */
/*   Updated: 2025/02/10 10:41:03 by Dias             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_handle_sign(char **str)
{
	int	sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

t_number	ft_return_error(void)
{
	t_number	number;

	write (2, "Error\n", 6);
	number.value = 0;
	number.error = 1;
	return (number);
}

t_number	ft_atoi_with_error(char **str)
{
	t_number	number;
	int			sign;
	int			flag;

	flag = 1;
	number.value = 0;
	number.error = 0;
	sign = ft_handle_sign(str);
	while (**str != '\0' && **str != ' ')
	{
		if (!(**str >= '0' && **str <= '9'))
			return (ft_return_error());
		number.value = number.value * 10 + (**str - '0');
		flag = 0;
		if ((sign == 1 && number.value > INT_MAX) || \
		(sign == -1 && number.value > -(long)INT_MIN))
			return (ft_return_error());
		(*str)++;
	}
	if (flag)
		return (ft_return_error());
	number.value *= sign;
	return (number);
}
