/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:40:17 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/16 18:42:13 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	result;
	int	remainder;

	if (*b != 0)
	{
		result = *a / *b;
		remainder = *a % *b;
		*a = result;
		*b = remainder;
	}
}
/*
#include <stdio.h>
int main ()
{
	int a = 16;
	int b = 5;

	printf("print a and b: %i, %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("print result and remainder: %i, %i\n", a, b);	
}
*/
