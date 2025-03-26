/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swestpha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:28:22 by swestpha          #+#    #+#             */
/*   Updated: 2025/03/26 11:28:25 by swestpha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	res_div;
	int	res_mod;

	res_div = a / b;
	res_mod = a % b;
	*div = res_div;
	*mod = res_mod;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 9;
	b = 3;
	ft_div_mode(a, b, &div, &mod);
	printf("div: %d mod: %d \n", div, mod);
}*/
