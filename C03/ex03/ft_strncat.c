/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:30:46 by dbatista          #+#    #+#             */
/*   Updated: 2024/08/06 14:20:17 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	q;

	i = 0;
	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[q + i] = src[i];
		i++;
	}
	dest[q + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char    name1[50] = "Hello ";
    char    name2[] = "World. My name is Daniel";
    ft_strncat(name1, name2, 4);
    printf("%s\n", name1);    
    return 0;
}*/
