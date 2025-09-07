/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hneto--p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:08:33 by hneto--p          #+#    #+#             */
/*   Updated: 2025/09/07 21:08:38 by hneto--p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str);

// int main(void)
// {
//     ft_putstr("proutproutprout");
// }

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i],1);
        i++;
    }
}