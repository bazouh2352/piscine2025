/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:33:20 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 22:51:50 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("abjdehflkj"));
// 	printf("%d\n", ft_str_is_lowercase("abjdehflkjQ"));
// }

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
