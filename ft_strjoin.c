/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:00:04 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 09:00:06 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	size1;
	size_t	size2;

	size1 = 0;
	size2 = 0;
	if (s1)
		size1 = ft_strlen((char *)s1);
	if (s2)
		size2 = ft_strlen((char *)s2);
	ptr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr != NULL)
	{
		if (s1)
			size1 = ft_strlcpy(ptr, s1, size1 + 1);
		else
			return (NULL);
		if (s2)
			ft_strlcpy(ptr + size1, s2, size2 + 1);
		else
			return (NULL);
	}
	return (ptr);
}
