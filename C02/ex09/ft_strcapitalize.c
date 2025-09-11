/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:56:45 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/04 19:56:48 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strcapitalize(char *str);
int		ft_str_is_alphanum(char c);

int	ft_str_is_alphanum(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (!word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		word = ft_str_is_alphanum(str[i]);
		i++;
	}
	return (str);
}

// int main()
// {
//     char    str[] = "hI, HOW aRE YoU? 42WORDS FORTY-TWO; FIFTY+AND+ONE";
//     printf("%s", ft_strcapitalize(str));
// }