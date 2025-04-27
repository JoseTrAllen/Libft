/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:57:38 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 08:58:15 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((d <= (s + n)) && (s <= d))
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n--)
			*(d--) = *(s--);
	}
	else
		while (n--)
			*(d++) = *(s++);
	return (dest);
}
