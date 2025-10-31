/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:27:19 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:14 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void *src, size_t n)
{
	const unsigned char	*src_s;
	unsigned char		*dest_s;
	size_t				i;

	dest_s = dest;
	src_s = src;
	if (dest > src)
	{
		while (n-- > 0)
		{
			dest_s[n] = src_s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_s[i] = src_s[i];
			i++;
		}
	}
	return (dest);
}
