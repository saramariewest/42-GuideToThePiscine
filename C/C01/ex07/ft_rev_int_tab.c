/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swestpha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:30:55 by swestpha          #+#    #+#             */
/*   Updated: 2025/03/26 11:30:58 by swestpha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i++;
		size--;
	}
}
/*
int	main(void)
{
    int tab[] = {0,1,2,3,4,5,6,7,8};
    int size = 9;

    int i = 0;
    printf("Array before changes\n");
    while(i < size)
    {
        printf("%d ", tab[i]);
		i++;
    }
    printf("\n");
	
    ft_rev_int_tab(tab, size);
    
    int j = 0;
    printf("Array after changes\n");
    while(j<size)
    {
        printf("%d ", tab[j]);
        j++;
    }

    return 0;
}
*/
