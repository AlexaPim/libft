/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:19:58 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 22:20:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.
//      Both strings are assumed to be n bytes long.

// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, oth-
//      erwise returns the difference between the first two differing bytes
//      (treated as unsigned char values, so that `\200' is greater than `\0',
//      for example).  Zero-length strings are always identical.  This behavior