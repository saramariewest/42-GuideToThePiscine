/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:47:05 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:56:29 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	int				i;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && (n < nb))
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
// 	int		n = 2;
// 	char	s1[10] = "aaaaa";
// 	char	s2[] = "bbbbbb";
// 	printf("%s 1\n", ft_strncat(s1, s2, n));
// 	//printf("%s",strncat(s1, s2, n));
// }
