/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:12:08 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 11:12:14 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == NULL && src == NULL)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*tmp_dst++ = *tmp_src++;
		n--;
	}
	return (dst);
}
