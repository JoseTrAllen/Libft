/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:59:41 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 08:59:44 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen((char *)s);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr != NULL)
	{
		ptr = ft_memcpy(ptr, s, size);
		ptr[size] = '\0';
	}
	return (ptr);
}
