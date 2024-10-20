/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:37:26 by dbatista          #+#    #+#             */
/*   Updated: 2024/08/04 15:55:10 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	q;

	i = 0;
	q = 0;
	while (dest[q] != '\0')
		q++;
	while (src[i] != '\0')
	{
		dest[q + i] = src[i];
		i++;
	}
	dest[q + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char    name1[50] = "Hello ";
    char    name2[] = "World. My name is Daniel";

    ft_strcat(name1, name2);
    printf("%s\n", name1);
    
    return 0;
}*/
