/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:40:47 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/29 17:23:19 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
 
int     main()
{
	char    name1[] = "Daniel";
	char    name2[] = "D@niel";
	char    name3[] = "D4niel";
	printf("Resultado name1: %d\n", ft_str_is_alpha(name1));
	printf("Resultado name2: %d\n", ft_str_is_alpha(name2));        
	printf("Resultado name3: %d\n", ft_str_is_alpha(name3));
	return 0;
}*/
