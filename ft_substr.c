/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:15:59 by alvarolo          #+#    #+#             */
/*   Updated: 2024/10/04 12:22:37 by alvarolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_substr;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_substr = (char *)malloc((len + 1) * sizeof(char));
	if (!new_substr)
		return (0);
	ft_strlcpy(new_substr, s + start, len + 1);
	return (new_substr);
}
