/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:51:24 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/01 21:44:20 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str);

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	str = "prout";
// 	if (argc > 1)
// 		str = argv[1];
// 	printf("%s contient %d lettres !\n", str, ft_strlen(str));
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
