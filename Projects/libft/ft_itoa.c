/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:47:19 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:06 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_int(long n)
{
	int	i;

	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*alloc_str(long n, int i, int j)
{
	char	*str;

	str = malloc((i + j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i + j] = '\0';
	if (j == 0)
	{
		i--;
	}
	while (i >= j)
	{
		str[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	if (j == 1)
	{
		str[0] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	long	num;

	num = n;
	j = 0;
	i = len_int(num);
	if (num < 0)
	{
		j = 1;
		num = -num;
	}
	return (alloc_str(num, i, j));
}
