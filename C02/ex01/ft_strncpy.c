/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:14:09 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:21:01 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int     main(void)
{
        char    name1[] = "Hello World";
        char    name2[15];
       
        ft_strncpy(name2, name1, 5);
	printf("Resultado com 5 caracter\n");
        printf("Nome1: %s\n", name1);
	printf("Nome2: %s\n", name2);
	
	printf("Resultado com 8 caracter\n");
	ft_strncpy(name2, name1, 8);
	printf("Nome1: %s\n", name1);
        printf("Nome2: %s\n", name2);

}*/
