/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:06:27 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/05 11:06:30 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char dest[10] = "gitgud";
// 	char src[] = "shaw";
// 	printf("%s\n", ft_strncat(dest, src, 15));
// }

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
