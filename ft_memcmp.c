/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:57:09 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 08:57:11 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*last;

	first = (unsigned char *)s1;
	last = (unsigned char *)s2;
	while (n--)
	{
		if (*(first) != *(last))
			return (*first - *last);
		first++;
		last++;
	}
	return (0);
}
