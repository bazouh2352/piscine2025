/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:36:40 by hneto--p          #+#    #+#             */
/*   Updated: 2025/10/18 18:06:32 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	int	i;

	i = 0;
	char *str = "prout9_gracias DaGobert.exe";
	// 		 ft_isalnum
	printf("%s\n\n", str);
	while (str[i])
	{
	    printf("%d", ft_isalnum(str[i]));
	    i++;
	}
	i = 0;
	printf("\n");
	//		 ft_isascii
	while (str[i])
	{
	    printf("%d", ft_isascii(str[i]));
	    i++;
	}
	i = 0;
	printf("\n");
	// 		ft_isprint
	while (str[i])
	{
	    printf("%d", ft_isprint(str[i]));
	    i++;
	}
	i = 0;
	printf("\n");
	// 		ft_tolower
	while (str[i])
	{
	    printf("%c", ft_tolower(str[i]));
	    i++;
	}	
	i = 0;
	printf("\n");
	// 		ft_toupper
	while (str[i])
	{
	    printf("%c", ft_toupper(str[i]));
	    i++;
	}
	i = 0;
	printf("\n");
	// 		ft_strchr
	printf("%s \n", ft_strchr(str, 'G'));
	printf("%s \n", ft_strchr(str, 'z'));
	//		ft_strrchr
	printf("%s \n", ft_strrchr(str, 'r'));
	//		ft_memset
	char str2[] = "prout";
	ft_memset(str2, '0', 5);
	printf("%s\n", str2);
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_memset(tab, 5, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
}
