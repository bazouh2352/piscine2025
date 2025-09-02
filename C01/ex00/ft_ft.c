/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:53:04 by hneto--p          #+#    #+#             */
/*   Updated: 2025/08/28 19:10:03 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ft(int *changing_value);

// int	main(void)
// {
// 	int	value;

// 	value = 24;
// 	printf("%d\n", value);
// 	ft_ft(&value);
// 	printf("%d", value);
// }

void	ft_ft(int *changing_value)
{
	*changing_value = 42;
}
