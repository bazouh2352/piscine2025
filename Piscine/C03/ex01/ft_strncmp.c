/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:37:17 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/05 10:37:20 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("zzz", "z", 3));
// 	printf("%d\n", ft_strncmp("zzz", "z", 1));
// 	printf("%d\n", ft_strncmp("zzz", "z", 15));
// 	printf("%d\n", ft_strncmp("yzz", "z", 1));
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
