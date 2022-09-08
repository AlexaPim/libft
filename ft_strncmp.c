/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:13 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/09 01:00:45 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;

    i = 0;
    // while ((s1[i] || s2[i]) && (i < n))
    // {
    //     if ((unsigned char)s1[i] < (unsigned char)s2[i])
    //         return (-1);
    //     if ((unsigned char)s1[i] > (unsigned char)s2[i])
    //         return (1);
    //     i++;
    // }
    // return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}



// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the null-
//      terminated strings s1 and s2.

//      The strncmp() function compares not more than n characters.  Because
//      strncmp() is designed for comparing strings rather than binary data