/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:18:41 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 20:00:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// The isascii() function tests for an ASCII character, which is any charac-
//      ter between 0 and octal 0177 inclusive.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>

int	main()
{
	int x;

	x = '+';
	printf("%d", ft_isascii(x));
}