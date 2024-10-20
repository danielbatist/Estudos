/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:07:42 by dbatista          #+#    #+#             */
/*   Updated: 2024/08/04 18:12:54 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main() 
{
    char *str = "Hello World!";
    char *to_find = "World";
    printf("Resultado strstr: %s\n", strstr(str, to_find));
    printf("Resultado ft_strstr: %s\n", ft_strstr(str, to_find));

    char *string = "My name is Daniel!";
    char *neddle = "a";
    printf("Resultado strstr: %s\n", strstr(string, neddle));
    printf("Resultado ft_strstr: %s\n", ft_strstr(string, neddle));

    return 0;
}*/
