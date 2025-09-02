/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:48:43 by hneto--p          #+#    #+#             */
/*   Updated: 2025/08/28 20:40:18 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int input);

void	ft_is_negative(int input)
{
	char	output;

	output = 'P';
	if (input < 0)
	{
		output = 'N';
	}
	write(1, &output, 1);
}


int main()
{
	ft_is_negative(-4);
}
