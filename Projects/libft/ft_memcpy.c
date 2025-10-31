/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:27:15 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:12 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	const unsigned char	*src_s;
	unsigned char		*dest_s;
	size_t				i;

	i = 0;
	dest_s = dest;
	src_s = src;
	while (i < n)
	{
		dest_s[i] = src_s[i];
		i++;
	}
	return (dest);
}
