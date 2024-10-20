/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:55:25 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:05:23 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	name1[] = "24568612123546";
	char	name2[] = "24AB68612";
	char	name3[] = "24asdas6*%&";
	printf("%d\n", ft_str_is_numeric(name1));
	printf("%d\n", ft_str_is_numeric(name2));
	printf("%d\n", ft_str_is_numeric(name3));
	return (0);
}*/
