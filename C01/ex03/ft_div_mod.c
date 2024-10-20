/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:40:17 by dbatista          #+#    #+#             */
/*   Updated: 2024/07/24 18:52:44 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int num1;
	int num2;
	int resp;
	int rest;
	
	num1 = 10;
	num2 = 2;
	
	ft_div_mod(num1,num2,&resp,&rest);
	
	printf("Valor1: %d\n", num1);
	printf("Valoe2: %d\n",num2);
	printf("Divisão: %d\n",resp);
	printf("Resto: %d\n",rest);
}*/
