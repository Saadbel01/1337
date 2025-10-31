/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:27:26 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:28 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	const char	*str;

	str = s;
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *) str);
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
