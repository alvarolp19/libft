/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:16:56 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 11:17:03 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cadena, const char *busc, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (busc[0] == '\0')
		return ((char *)cadena);
	while (cadena[i] != '\0')
	{
		j = 0;
		while (cadena[i + j] == busc[j] && (i + j) < len)
		{
			if (cadena[i + j] == '\0' && busc[j] == '\0')
				return ((char *)&cadena[i]);
			j++;
		}
		if (busc[j] == '\0')
			return ((char *)(cadena + i));
		i++;
	}
	return (0);
}
