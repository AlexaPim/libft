/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:07 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:37:09 by ado-prad         ###   ########.fr       */
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