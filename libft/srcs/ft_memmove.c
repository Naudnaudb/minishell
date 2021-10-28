/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:21 by abordack          #+#    #+#             */
/*   Updated: 2020/05/02 19:43:52 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
	{
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
