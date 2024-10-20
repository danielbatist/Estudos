/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:51:09 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:07:03 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        char    name1[] = "ngdsjnv";
	char    name2[] = "daNIel";
	char    name3[] = "danie1";
        printf("Resultado name1: %d\n", ft_str_is_lowercase(name1));
        printf("Resultado name2: %d\n", ft_str_is_lowercase(name2));
        printf("Resultado name3: %d\n", ft_str_is_lowercase(name3));
        return (0);
}*/
