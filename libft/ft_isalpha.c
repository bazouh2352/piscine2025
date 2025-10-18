/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:49:17 by hneto--p          #+#    #+#             */
/*   Updated: 2025/10/14 18:36:53 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	int	i;
// 	char	name[80];
// 	short	correct = 1;
// 	printf("Entrez votre nom:\n");
// 	scanf("%[^\n]", name);

// 	while(name[i])
// 	{
// 		if (!ft_isalpha(name[i]))
// 			correct = 0;
// 		i++;
// 	}

// 	if (correct)
// 		printf("Bonjour, %s !", name);
// 	else
// 		printf("Entree incorrecte !");
// }
