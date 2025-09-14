/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 20:54:18 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/07 21:01:03 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

// #include <stdio.h>

// int	main()
// {
// 	printf("taille de prout: %d", ft_strlen("prout"));
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
