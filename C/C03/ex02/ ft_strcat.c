/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:44:48 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:56:56 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include<stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	s1[10] = "aaaaa";
// 	char	s2[] = "bb";
// 	printf("%s 1\n", ft_strcat(s1, s2));
// 	//printf("%s",strcat(s1, s2));
// }
