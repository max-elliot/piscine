/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneuhaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:35:05 by mneuhaus          #+#    #+#             */
/*   Updated: 2024/07/23 10:35:07 by mneuhaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			if (to_find[j + 1] != '\0')
			{
				j++;
				i++;
			}
			else
			{
				return (to_find);
			}
		}
		i = i + 1 - j;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char s1[] = "Maximal";
	char s2[] = "Max";

	printf("%s", ft_strstr(s1, s2));
}
*/
