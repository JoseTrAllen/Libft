/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:00:13 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 09:00:15 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_des;
	size_t	len_src;
	size_t	i;

	len_des = ft_strlen(dest);
	len_src = ft_strlen((char *)src);
	if (size == 0)
		return (len_src);
	if (size <= len_des)
		return (len_src + size);
	i = 0;
	while (src[i] && (i + len_des) < size - 1)
	{
		dest[len_des + i] = src[i];
		i++;
	}
	dest[len_des + i] = '\0';
	return (len_des + len_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10] = {0};
	char	*src = "HOLA";
	
	printf("%zu\n", ft_strlcat(dest, src, 0));
}*/