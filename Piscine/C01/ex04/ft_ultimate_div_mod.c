/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:31:24 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/01 19:18:49 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 21;
// 	b = 8;
// 	printf("%d divise par %d =", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf(" %d, reste %d", a, b);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
