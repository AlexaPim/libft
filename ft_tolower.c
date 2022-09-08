/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:45 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:38:48 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);	
}

// #include <stdio.h>

// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write (1, &c, 1);
// }

// int main()
// {
//     int j = 0;
//     char str[] = "ALEXA\n";
//     char ch;
 
//     while (str[j]) {
//         ch = str[j];
//         ft_putchar(ft_tolower(ch));
//         j++;
//     }
//     return 0;
// }

// DESCRIPTION
//      The tolower() function converts an upper-case letter to the corresponding
//      lower-case letter.  The argument must be representable as an unsigned