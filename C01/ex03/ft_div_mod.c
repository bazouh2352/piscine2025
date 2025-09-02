/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:01:55 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/01 15:33:56 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {	
// 	int	div;
// 	int	mod;

// 	ft_div_mod(21, 5, &div, &mod);
// 	if (div)
// 		printf("res:%d, remainder:%d", div, mod);
// 	else
// 		printf("res:%d", div);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
