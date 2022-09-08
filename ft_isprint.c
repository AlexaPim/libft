/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:19:12 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 20:31:40 by coder            ###   ########.fr       */
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