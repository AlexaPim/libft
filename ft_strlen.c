/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:43:08 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 19:43:11 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

// #include <stdio.h>

// int main()
// {
// 	char *x;

// 	x = "alouca";
// 	printf("%zu", ft_strlen(x));
// 	return (*x);
// }




// DESCRIPTION
//      The strlen() function computes the length of the string s.  The strnlen()
//      function attempts to compute the length of s, but never scans beyond the
//      first maxlen bytes of s.

//  The strlen() function calculates the length of the string pointed to by s, excluding
//        the terminating null byte ('\0').