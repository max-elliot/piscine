/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:41:20 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/31 18:42:39 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	while (power < 0)
	{
		return (0);
	}
	while (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		return (nb * ft_iterative_power(nb, power -1));
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(3, 4));
}
*/
