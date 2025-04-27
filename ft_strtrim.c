/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:02:08 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 09:02:09 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_to_find(const char *set, char c);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	size_t	size;
	size_t	end;
	size_t	start;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_to_find(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_to_find(set, s1[end - 1]))
		end--;
	size = end - start;
	ptr = (char *)ft_calloc(size + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1 + start, size);
	return (ptr);
}

static int	ft_to_find(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
