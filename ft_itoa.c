/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:09:34 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 11:09:42 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		++i;
	}
	while (n > 0)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	number;
	char		*res;
	int			i;

	number = n;
	i = count_digit((long int)n);
	res = (char *)malloc((i + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[i--] = '\0';
	if (number < 0)
	{
		*res = '-';
		number *= -1;
	}
	if (number == 0)
		*res = '0';
	while (number > 0)
	{
		res[i--] = (number % 10) + '0';
		number /= 10;
	}
	return (res);
}
