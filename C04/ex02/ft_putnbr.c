/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:13:23 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/07 21:13:26 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

// int	main(void)
// {
// 	ft_putnbr(-24565324);
// }

void	ft_putnbr(int nb)
{
	char	output;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	output = nb % 10;
	output = output + '0';
	write(1, &output, 1);
}
