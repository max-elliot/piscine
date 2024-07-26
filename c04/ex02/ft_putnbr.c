/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <mneuhaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:48:11 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/25 10:49:21 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write (1, "0", 1);
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl)
	{
		c[i++] = (nbl % 10) + 48 ;
		nbl /= 10;
	}
	while (i > 0)
	{
		write (1, &c[--i], 1);
	}
}

#include <stdio.h>


int	main(void)
{
	ft_putnbr(-50);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(200);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}

