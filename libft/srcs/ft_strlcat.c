/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:26 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:26 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	char	*odst;
	char	*osrc;
	size_t	nleft;
	size_t	dlen;

	odst = dst;
	osrc = src;
	nleft = size;
	while (nleft-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	nleft = size - dlen;
	if (nleft == 0)
		return (dlen + ft_strlen(osrc));
	while (*src)
	{
		if (nleft != 1)
		{
			*dst++ = *src;
			nleft--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - osrc));
}
