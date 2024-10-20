/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:54:23 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/22 11:39:47 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	resp;

	if (n < 0)
	{
		resp = 'N';
		write(1, &resp, 1);
	}
	else
	{
		resp = 'P';
		write(1, &resp, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-3);
} */
