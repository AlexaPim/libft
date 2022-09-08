/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:20:12 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 22:20:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// DESCRIPTION
//      The memcpy() function copies n bytes from memory area src to memory area
//      dst.  If dst and src overlap, behavior is undefined.  Applications in
//      which dst and src might overlap should use memmove(3) instead.

// RETURN VALUES
//      The memcpy() function returns the original value of dst.
