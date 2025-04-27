/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:01:53 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 09:01:55 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	if (!(*little))
		return ((char *)big);
	if (len == 0)
		return (NULL);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		aux = j;
		while (little[i] && big[aux] == little[i] && aux < len)
		{
			aux++;
			i++;
		}
		if (!little[i])
			return ((char *)big + j);
		j++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *largestring = "gagagagatogagaga";
	const char *smallstring = "gato";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 10);
	printf("%s\n", ptr);

	const char *largestring1 = "gagagagatogagaga";
	const char *smallstring1 = "gato";
	char *ptr1;

	ptr1 = ft_strnstr(largestring1, smallstring1, 10);
	printf("%s\n", ptr1);
	return (0);
}*/
