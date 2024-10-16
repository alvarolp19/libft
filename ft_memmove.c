/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:12:39 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 12:08:46 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (len == 0 || dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest > source)
		while (len-- > 0)
			*(dest + len) = *(source + len);
	else
		while (len-- > 0)
			*dest++ = *source++;
	return (dst);
}
