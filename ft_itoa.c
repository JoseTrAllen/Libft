/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josetrenor <josetrenor@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:49:50 by josetrenor        #+#    #+#             */
/*   Updated: 2025/04/27 08:49:53 by josetrenor       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(size_t n);
static void	ft_fill_array(char *str, long numb, int digits);

char	*ft_itoa(int n)
{
	char	*str;
	long	numb;
	int		digits;

	if (n < 0)
	{
		numb = ((-1L) * n);
		digits = ft_count_digits(numb) + 1;
	}
	else
	{
		numb = n;
		digits = ft_count_digits(numb);
	}
	str = (char *)ft_calloc((digits + 1), sizeof(char));
	if (str)
	{
		if (n < 0)
			str[0] = '-';
		ft_fill_array(str, numb, digits - 1);
	}
	return (str);
}

static void	ft_fill_array(char *str, long numb, int digits)
{
	if (numb > 0)
	{
		while (numb > 0)
		{
			str[digits--] = (numb % 10) + 48;
			numb /= 10;
		}
	}
	else
		str[0] = '0';
}

static int	ft_count_digits(size_t n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
