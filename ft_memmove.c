/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:20:29 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 22:20:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len);

// DESCRIPTION
//      The memmove() function copies len bytes from string src to string dst.
//      The two strings may overlap; the copy is always done in a non-destructive
//      manner.

// RETURN VALUES
//      The memmove() function returns the original value of dst.