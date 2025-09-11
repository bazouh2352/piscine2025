/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:33:20 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 22:51:50 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str);

// int	main(void)
// {
//     char    caractere[1];

//     caractere[0] = 2;
//     printf("%d\n", ft_str_is_printable(caractere));
//     printf("%c\n", '\0');
// 	printf("%d\n", ft_str_is_printable("JKAHDQHDKAJ"));
// 	printf("%d\n", ft_str_is_printable("WKDKLJHDq"));
// }

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
