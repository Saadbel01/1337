/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 09:15:54 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 13:30:44 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
