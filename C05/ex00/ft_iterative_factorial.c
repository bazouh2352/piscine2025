/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:40:19 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/08 15:40:23 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb);

// int	main (void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(-1));
// }

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
