/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <mneuhaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:41:20 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/08/01 13:26:55 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_power(3, 4));
}
