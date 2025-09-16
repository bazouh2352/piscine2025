/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:48:36 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/16 16:57:07 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
//     printf ("%d\n", ft_is_prime(-2));
//     printf ("%d\n", ft_is_prime(1));
//     printf ("%d\n", ft_is_prime(7));
//     printf ("%d\n", ft_is_prime(1021159));
// }
