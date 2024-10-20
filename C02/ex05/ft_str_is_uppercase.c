/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:58:27 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:11:56 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
        char    name1[] = "DANIEL";
        char    name2[] = "danIEL";
        char    name3[] = "456fds21";
        printf("%d\n", ft_str_is_uppercase(name1));
        printf("%d\n", ft_str_is_uppercase(name2));
        printf("%d\n", ft_str_is_uppercase(name3));
        return (0);
}*/
