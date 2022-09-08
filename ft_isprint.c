/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:36:28 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:36:31 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// The isprint() function tests for any printing character, including space
//      (` ').  The value of the argument must be representable as an unsigned
//      char or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

//      040 sp        041 ``!''     042 ``"''     043 ``#''     044 ``$''

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
//    int c;
//    for(c = 1; c <= 127; c++)
//    	if (isprint(c)!= 0)
//              printf("%c ", c);
//    return 0;
// }