/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:44:30 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/16 18:45:26 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		str++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	int result;
	char s[] = "hi!";
	result = ft_strlen(s);
	printf("%i\n", result);
	return (0);
}
*/
