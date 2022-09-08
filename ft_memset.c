/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:42:47 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 23:50:54 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	// while (len--)
	// 	((unsigned char *)b + len) = c;
	// return (b);
	while (len--)
	{
		((unsigned char *)b + len) = (unsigned char)c;
	}
	return (b);
}


// DESCRIPTION
//      The memset() function writes len bytes of value c (converted to an
//      unsigned char) to the string b.

// RETURN VALUES
//      The memset() function returns its first argument.