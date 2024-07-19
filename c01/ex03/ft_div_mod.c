/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*              || b < '0')                                 +#+#+#+#+#+   +#+ */
/*   Created: 2024/07/16 18:33:59 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/16 18:40:02 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int	main ()
{
	int	a = 19;
	int	b = 5;
	int	div;
	int	mod;

	if (b != 0)
	{
		ft_div_mod(a, b, &div, &mod);
		printf("results: %i, %i, %i, %i\n", a, b, div, mod);
	}
	return (0);
}
*/
