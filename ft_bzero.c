/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:14:11 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 17:39:48 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s[i] != '\0')
	}
}


//  The bzero() function writes n zeroed bytes to the string s.  If n is
//      zero, bzero() does nothing.