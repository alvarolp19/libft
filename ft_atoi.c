/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:15:59 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 12:22:37 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *input_string)
{
	int	integer_result;
	int	sign;

	integer_result = 0;
	sign = 1;
	while (*input_string == ' ' || (*input_string >= 9 && *input_string <= 13))
		input_string++;
	if (*input_string == '-')
	{
		sign = -1;
		input_string++;
	}
	else if (*input_string == '+')
		input_string++;
	while (*input_string >= '0' && *input_string <= '9')
	{
		integer_result = (integer_result * 10) + (*input_string - '0');
		input_string++;
	}
	return (integer_result * sign);
}
