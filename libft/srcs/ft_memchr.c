/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:19 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:19 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*memzone;

	memzone = (unsigned char *)s;
	while (n--)
		if (*memzone++ == (unsigned char)c)
			return (--memzone);
	return (0);
}
