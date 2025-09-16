/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:39:16 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/05 09:39:18 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("a", "A"));
// 	// printf("%d\n", ft_strcmp("aloupe", "bpoule"));
// 	// printf("%d\n", ft_strcmp("poule", "poule"));
// 	// printf("%d\n", ft_strcmp("boeuf_au_fromage", "boeuf au fromage"));
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
