/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:11:27 by hneto--p          #+#    #+#             */
/*   Updated: 2025/10/18 15:20:50 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	int		i;
// 	char	name[80];
// 	short	correct;

// 	correct = 1;
// 	printf("Entrez votre nom:\n");
// 	scanf("%[^\n]", name);
// 	while (name[i])
// 	{
// 		if (!ft_isalnum(name[i]))
// 			correct = 0;
// 		i++;
// 	}
// 	if (correct)
// 		printf("Bonjour, %s !", name);
// 	else
// 		printf("Entree incorrecte !");
// }
