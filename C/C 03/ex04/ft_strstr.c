/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkliazni <jkliazni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:54:01 by jkliazni          #+#    #+#             */
/*   Updated: 2025/03/24 10:55:56 by jkliazni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (str[i] != '\0')
	{
		while (to_find[i2] == str[i])
		{
			if (to_find[i2 + 1] == '\0')
				return (str + (i - i2));
			i++;
			i2++;
		}
		i++;
		i2 = 0;
	}
	return (0);
}
// #include<stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	s1[] = "aaaaabbaabbabbb";
// 	char	s2[] = "bbb";
// 	printf("%s 1\n", ft_strstr(s1, s2));
// 	printf("%s",strstr(s1, s2));
// }
