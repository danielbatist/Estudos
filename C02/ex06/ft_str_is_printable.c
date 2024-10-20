/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:06:28 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:19:09 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
        char    name1[] = "D@N|&l";
        char    name2[] = "456531";
        char	name3 = 3;
        printf("%d\n", ft_str_is_printable(name1));
        printf("%d\n", ft_str_is_printable(name2));
        printf("%d\n", ft_str_is_printable(&name3));
        return (0);
}*/
