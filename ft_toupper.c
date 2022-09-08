/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:56 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:38:58 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// int main()
// {
//     int j = 0;
//     char str[] = "alexa\n";
//     char ch;
 
//     while (str[j]) {
//         ch = str[j];
//         ft_putchar(ft_toupper(ch));
//         j++;
//     }
 
//     return 0;
// }

// DESCRIPTION
//      The toupper() function converts a lower-case letter to the corresponding
//      upper-case letter.  The argument must be representable as an unsigned