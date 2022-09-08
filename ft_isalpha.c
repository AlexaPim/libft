/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:36:16 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:36:19 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The isalpha() function tests for any character for which isupper(3) or
//     islower(3) is true.  The value of the argument must be representable as
  //   an unsigned char or the value of EOF.
//
  //   In the ASCII character set, this includes the following characters (pre-
    // ceded by their numeric values, in octal):
//
//     101 ``A''     102 ``B''     103 ``C''     104 ``D''     105 ``E''

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

// #include <stdio.h>

// int main(int c)
// {
// 	c = '1';
// 	printf("%d", ft_isalpha(c));
// 	return (0);
// }