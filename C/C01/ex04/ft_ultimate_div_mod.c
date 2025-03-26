/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swestpha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:29:01 by swestpha          #+#    #+#             */
/*   Updated: 2025/03/26 11:29:05 by swestpha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_div;
	int	res_mod;

	res_div = *a / *b;
	res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;
}
/*
int	main(void)
{
	int num1;
	int num2;

	num1 = 9;
	num2 = 3;

	ft_ultimate_div_mod(&num1, &num2);
	printf("num1: %d, num2: %d\n", num1, num2);
}*/
