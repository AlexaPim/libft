/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:46 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:37:49 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

// DESCRIPTION
//      The strlcpy() and strlcat() functions copy and concatenate strings with
//      the same input parameters and output result as snprintf(3).  They are
//      designed to be safer, more consistent, and less error prone replacements
//      for the easily misused functions strncpy(3) and strncat(3).