/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:15:59 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 12:22:37 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
