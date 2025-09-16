/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:33:55 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/07 21:33:57 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str);

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", atoi("     prout----+--+1234ab567"));
// }

int	atoi(char *str)
{
	int	res;
	int	i;
	int	negatif;

	i = 0;
	res = 0;
	negatif = 1;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			negatif *= -1;
		i++;
	}
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * negatif);
}
