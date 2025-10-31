/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:26:36 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 13:29:03 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_num(const char	*str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + (str[i] - '0');
		}
		else
		{
			return (res);
		}
		i++;
	}
	return (res);
}

int	ft_atoi(const char	*str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			nb++;
		}
		i++;
	}
	if (nb == 1)
		return (calc_num(str + i) * -1);
	return (calc_num(str + i));
}
