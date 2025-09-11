/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:33:20 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 22:51:50 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("str"));
// 	printf("%d\n", ft_str_is_alpha("S.TR"));
// 	printf("%d\n", ft_str_is_alpha("pr#out:"));
// 	printf("%d\n", ft_str_is_alpha(""));
// }

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
