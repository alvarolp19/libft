/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:13:15 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 11:15:07 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*res;

	size = 1 + ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(size * sizeof(char));
	if (res == 0)
		return (0);
	ft_strlcpy(res, s1, size);
	ft_strlcat(res, s2, size);
	return (res);
}
