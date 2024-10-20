/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:33:08 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/25 11:05:28 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 3;
	num2 = 4;
	printf("PriValor: %d\n", num1);
	printf("SegValor: %d\n", num2);
	ft_swap(&num1, &num2);
	printf("PriValAlt: %d\n", num1);
        printf("SegValAlt: %d\n", num2);
}*/
