/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:06:45 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/07 19:06:48 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);

// #include <stdio.h>

// int main(void)
// {
// 	char *str;
// 	char *to_find;

// 	str = "plouflkwd";
// 	to_find = "ouf";
//     printf(" %s\n", ft_strstr(str,to_find));
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == 0)
	{
		return (str);
	}
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == 0)
			{
				return (&str[i]);
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
