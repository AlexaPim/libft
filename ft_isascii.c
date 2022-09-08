/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:26:01 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:26:03 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// The isascii() function tests for an ASCII character, which is any charac-
//      ter between 0 and octal 0177 inclusive.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int	main()
// {
// 	int x;

// 	x = '+';
// 	printf("%d", ft_isascii(x));
// }