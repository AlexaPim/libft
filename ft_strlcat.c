/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:21:29 by coder             #+#    #+#             */
/*   Updated: 2022/09/05 22:21:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

// DESCRIPTION
//      The strlcpy() and strlcat() functions copy and concatenate strings with
//      the same input parameters and output result as snprintf(3).  They are
//      designed to be safer, more consistent, and less error prone replacements
//      for the easily misused functions strncpy(3) and strncat(3).