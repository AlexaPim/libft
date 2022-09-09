/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:38:31 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/09 22:51:14 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int x;

	x = ft_strlen(s);
	while (x + 1)
	{
   		if (s[x] == (char)c)
        	return ((char *)&s[x]);
    	x--;
	}
	return (0);
}

// DESCRIPTION
//      A função strchr() localiza a primeira ocorrência de c (convertida em um char) na string apontada por s. O caractere nulo final é considerado parte da string; portanto, se c é `\0', as funções localizam o final `\0'