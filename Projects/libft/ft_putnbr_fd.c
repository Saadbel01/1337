/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelcadi <sbelcadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:55:32 by sbelcadi          #+#    #+#             */
/*   Updated: 2025/10/30 14:01:22 by sbelcadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned long	nbr;

	nbr = n;
	if (n < 0)
	{
		c = '-';
		write(fd, &c, 1);
		nbr = nbr * -1;
	}
	if (nbr < 10)
	{
		c = '0' + nbr;
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		c = '0' + (nbr % 10);
		write(fd, &c, 1);
	}
}
