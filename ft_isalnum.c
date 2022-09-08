/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:18:05 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 19:52:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isupper(c));
}

int main()
{
    char x = '2';
    char y = 'a';
    printf("%d, %d\n", ft_isalpha(x),ft_isdigit(y));
    return(0);
}


// The isalnum() function tests for any character for which isalpha(3) or
//      isdigit(3) is true.  The value of the argument must be representable as
//      an unsigned char or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

//      060 ``0''     061 ``1''     062 ``2''     063 ``3''     064 ``4''