/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <hneto--p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:48:06 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/16 19:55:17 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_sort_params(int i, char **str)
{
	int	j;
	int	k;

	k = 0;
	j = i - 1;
	while (str[i][k])
	{
		str[j][k] = 0;
		k++;
	}
	return i;
}

int main(int argc, char **argv)
{
	int	i;
	int	

	i = argc - 1;
	while (i > 0)
	{
		ft_sort_params(i, &argv);
	}
}
