/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:26:18 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 17:26:21 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

// void	print_tab(int *tab, int size)
// {
// 	int	i;

// 	i = 0;
// 	printf("{ ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("}");
// 	printf("\nla size du tableau est %d.\n", size);
// }

// int	main(void)
// {
// 	int	tab[8] = { 8, 7, 5, 10, 6, 9, 1, 0};
// 	ft_sort_int_tab(tab, 8);
// 	print_tab(tab, 8);
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	cpy;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j] < tab[j - 1])
		{
			cpy = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = cpy;
			j--;
		}
		i++;
	}
}
