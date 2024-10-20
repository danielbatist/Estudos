/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:47:07 by dbatista          #+#    #+#             */
/*   Updated: 2024/08/05 14:13:51 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;	

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char    name1[] = "Word";
    char    name2[] = "World";
    char    name3[] = "Hello";

    printf("Function strncmp: %d\n", strncmp( name1, name2, 4));
    printf("Function strncmp: %d\n", strncmp( name2, name1, 3));
    printf("Function strncmp: %d\n", strncmp( name3, name1, 1));
    
    printf("Function ft_strncmp:  %d\n", ft_strncmp(name1, name2, 4));
    printf("Function ft_strncmp: %d\n", ft_strncmp(name2, name1, 3));
    printf("Function ft_strncmp: %d", ft_strncmp(name3, name1, 1));

    return 0;
}*/
