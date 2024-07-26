/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:47:43 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/24 18:24:01 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		++count;
		i++;
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
