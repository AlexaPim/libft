/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:22:52 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 20:29:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;

    i = 0;
    while ((s1[i] || s2[i]) && (i < n))
    {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i++;
    }
    return (0);
}



// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the null-
//      terminated strings s1 and s2.

//      The strncmp() function compares not more than n characters.  Because
//      strncmp() is designed for comparing strings rather than binary data