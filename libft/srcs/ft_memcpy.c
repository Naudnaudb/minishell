/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:20 by abordack          #+#    #+#             */
/*   Updated: 2020/05/02 19:24:33 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cp;

	cp = (char *)dest;
	if (!src && !dest)
		return (NULL);
	while (n--)
		*cp++ = *(char *)(src++);
	return (dest);
}
