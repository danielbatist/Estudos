/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:29:03 by dbatista          #+#    #+#             */
/*   Updated: 2024/08/04 18:24:59 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	name1[] = "Word";
	char	name2[] = "World";
	char	name3[] = "Hello";
		
	printf("Function strcmp: %d\n", strcmp(name1, name2));
	printf("Function strcmp: %d\n", strcmp(name2, name1));
	printf("Function strcmp: %d\n", strcmp(name3, name1));
	
	printf("Function ft_strcmp: %d\n", ft_strcmp(name1, name2));
	printf("Function ft_strcmp: %d\n", ft_strcmp(name2, name1));
	printf("Function ft_strcmp: %d\n", ft_strcmp(name3, name1));
	return 0;
}*/
