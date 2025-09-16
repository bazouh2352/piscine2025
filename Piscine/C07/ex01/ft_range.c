/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 20:32:13 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/16 20:27:05 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_dist(int a, int b)
{
    int i;
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

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*res;

	if (min >= max)
	{
		return (NULL);
	}
	size = ft_dist(max, min);
	i = 0;
	res = malloc(sizeof(int) * (size));
	while (i < size)
	{
		res[i] = ++min;
		i++;
	}
	return (res);
}

int	main()
{
	int	min = 24;
	int max = 50;
	int	*tab = ft_range(min, max);

	int	i = 0;
	while(i < ft_dist(max, min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("%d\n", ft_dist(-45, -45));
}