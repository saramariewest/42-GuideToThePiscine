/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:34:08 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:55:32 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (src[i] && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	n = 0;
	while (src[n])
		n++;
	return (i + n);
}
// #include<stdio.h>
// #include <string.h>
// int	main()
// {
// 	int		size = 10;
// 	char	s1[9] = "";
// 	char	s2[40] = "aaaaabbaa";
// 	printf("%u 1\n", ft_strlcat(s1, s2, size));
// 	//printf("%u",strlcat(s1, s2, size));
// }
