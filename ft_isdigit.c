/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:25:36 by ado-prad          #+#    #+#             */
/*   Updated: 2022/09/08 20:25:39 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


// The isdigit() function tests for a decimal digit character.  Regardless
//      of locale, this includes the following characters only:

//      ``0''         ``1''         ``2''         ``3''         ``4''
//      ``5''         ``6''         ``7''         ``8''         ``9''

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


// int	main()
// {
// 	char x;
	
// 	x = 1;
// 	printf("%d", ft_isdigit(x));
// 	return (0);
// }