/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:56:34 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:57:50 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// #include<stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	s1[] = "az";
// 	char	s2[] = "aa";
// 	printf("%d \n", ft_strcmp(s1, s2));
// 	printf("%d",strcmp(s1, s2));
// }
