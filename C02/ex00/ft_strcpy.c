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

char	*ft_strcpy(char *dest, char *src);

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;

// 	src = "guarana";
// 	char dest[] = "shaw";
// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
