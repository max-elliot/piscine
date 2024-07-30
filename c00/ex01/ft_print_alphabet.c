/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:31:33 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/14 13:01:58 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
