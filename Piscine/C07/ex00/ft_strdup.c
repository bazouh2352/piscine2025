/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:28:11 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/15 18:28:12 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
	{
		i++;
	}
	res = malloc(sizeof(char) * i);
	while (i >= 0)
	{
		res[i] = str[i];
		i--;
	}
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "SHAW";
//     printf("%s\n", ft_strdup(str1));
// }
