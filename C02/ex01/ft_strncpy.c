/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:08:54 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/02 20:23:04 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char	*src;

// 	src = "tomatea";
// 	char dest[] = "cancerdufoie";
// 	printf("%s\n", strncpy(dest, src, -1));
// 	printf("%s\n", ft_strncpy(dest, src, 5));
// 	printf("%s\n", ft_strncpy(dest, src, 7));
// 	printf("%c\n", dest[0]);
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	printf("prout");
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
