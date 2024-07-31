/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <mneuhaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:26:21 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/31 11:07:10 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_rev(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (--argc)
	{
		ft_putchar_rev(argc[argv]);
	}
}
