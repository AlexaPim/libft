/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:37:55 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/09 23:33:56 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	// strlcpy() function copies up to size - 1 characters

    size_t    i;

    i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}   
    return (dst[i]);
}

// strlcpy() e strlcat() pegam o tamanho total do buffer (não apenas o comprimento) e garantem terminar o resultado com NUL (desde que tamanho seja maior que 0 ou, no caso de strlcat(), desde que haja pelo menos um byte livre em dst). Observe que um byte para o NUL deve ser incluído no tamanho. Observe também que strlcpy() e strlcat() operam somente em strings ``C'' verdadeiras. Isto significa que para strlcpy() src deve ser NUL- terminado e para strlcat() ambos src e dst devem ser NUL-terminados. 
//A função strlcpy() copia até tamanho - 1 caracteres da string terminada em NUL src para dst , terminando com NUL o resultado. 
//A função strlcat() anexa a string terminada em NUL src até o final de dst. Ele irá anexar no máximo tamanho - strlen(dst) - 1 bytes, terminando com NUL o resultado. 
//As strings de origem e destino não devem se sobrepor, pois o comportamento é indefinido.


// cópia e concatenação de strings limitadas por tamanho