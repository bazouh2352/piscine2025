/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:57:25 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/03 20:57:41 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("0125648684354354"));
// 	printf("%d\n", ft_str_is_numeric("4465465465424234p12"));
// }

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
