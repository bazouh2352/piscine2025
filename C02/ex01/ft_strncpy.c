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

char	*ft_strncpy(char *dest, char *src, unsigned int n);

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "gitgudgitgudplouf";
// 	char dest[] = "shawshawshaw";
// 	printf("%s\n", ft_strncpy(dest, src, 0));
// 	printf("%s\n", ft_strncpy(dest, src, 7));
// 	printf("%s\n", ft_strncpy(dest, src, 12));
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
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
