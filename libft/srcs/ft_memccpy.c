/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:17 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:18 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*copybuffer;

	copybuffer = (char *)dest;
	while (n--)
	{
		*copybuffer++ = *(char *)(src++);
		if (*copybuffer == (char)c)
			return (copybuffer);
	}
	return (0);
}
