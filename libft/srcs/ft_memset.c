/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:09:41 by abordack          #+#    #+#             */
/*   Updated: 2020/05/08 21:20:08 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *ptr, int val, size_t count)
{
	unsigned char	*mem;

	mem = (unsigned char *)ptr;
	while (count--)
		*(mem++) = (unsigned char)val;
	return (ptr);
}
