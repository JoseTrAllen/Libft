/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:02:01 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 09:02:03 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	char	*ptr;

	ptr = (char *)s;
	size = ft_strlen(ptr);
	if (c == 0)
		return (ptr + size);
	while (size > 0)
	{
		size--;
		if (ptr[size] == (unsigned char)c)
			return (ptr + size);
	}
	return (NULL);
}
