/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulpin <akulpin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 10:58:02 by akulpin           #+#    #+#             */
/*   Updated: 2025/03/23 13:32:43 by akulpin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
void print_array(int *array, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
	printf("\n");
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] <= tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
    int tab[10] = {4, 7, 2, 9, 5, 6, 0, 3, 1, 8};
    int size = 10;

    int i = 0;
    printf("Array before changes\n");
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
	printf("\n\n");
    
    ft_sort_int_tab(tab, size);
    
    int j = 0;
    printf("Array after changes\n");
    while(j < size)
    {
        printf("%d ", tab[j]);
        j++;
    }
    
    return 0;
}*/
