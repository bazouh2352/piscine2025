/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:33:20 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 22:51:50 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str);

// int	main(void)
// {
//     char    str[] = "prout";
//     printf("%s", ft_strupcase(str));
// }

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
