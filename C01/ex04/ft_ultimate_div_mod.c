/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:11:40 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/24 18:53:48 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 12;
	num2 = 3;
	printf("Valor1: %d\n", num1);
	printf("Valoe2: %d\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Valor1alt: %d\n", num1);
	printf("VAlor2alt: %d\n", num2);
}*/
