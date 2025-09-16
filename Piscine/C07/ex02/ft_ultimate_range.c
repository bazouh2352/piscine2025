/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:58:38 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/16 20:48:40 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_dist(int a, int b)
{
	int	i;

	if (a > b)
	{
		i = a;
		a = b;
		b = i;
	}
	i = 0;
	while (a + i < b)
	{
		i++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	size = ft_dist(min, max);
	i = 0;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min + i < max)
	{
		printf("min+i: %d, max:%d\n", min+i, max);
		**(range+i) = min + i;
		i++;
	}
	return (size);
}

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&tab, 24, 40);
	printf ("size:%d\n", size);
	// while (i < size)
	// {
	// 	printf("%d\n", tab[i]);
	// 	i++;
	// }
}
