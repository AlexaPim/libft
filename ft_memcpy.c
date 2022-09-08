/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:36:57 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:37:00 by ado-prad         ###   ########.fr       */
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
