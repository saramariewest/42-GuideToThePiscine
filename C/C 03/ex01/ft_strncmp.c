/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:18:04 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:57:33 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
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
// 	int		n = 5;
// 	char	s1[] = "aaaaaa";
// 	char	s2[] = "aaaaaa";
// 	printf("%d \n", ft_strncmp(s1, s2, n));
// 	printf("%d",strncmp(s1, s2, n));
// }
