/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:10:07 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/11 17:10:09 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(-5, 2));
// 	printf("%d\n", ft_iterative_power(0, -1));
// }
