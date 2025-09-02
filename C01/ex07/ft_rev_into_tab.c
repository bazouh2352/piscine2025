/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_into_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:00:38 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/01 22:00:44 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_into_tab(int *tab, int size);

// void	print_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	int	tab2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_rev_into_tab(tab1, 8);
// 	ft_rev_into_tab(tab2, 9);
// 	print_tab(tab1, 8);
// 	print_tab(tab2, 9);
// }

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

void	ft_rev_into_tab(int *tab, int size)
{
	int	i;
	int	cpy;

	size--;
	i = 0;
	while (size > i)
	{
		cpy = tab[i];
		tab[i] = tab[size];
		tab[size] = cpy;
		size--;
		i++;
	}
}
