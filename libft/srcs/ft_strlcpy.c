/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:26 by abordack          #+#    #+#             */
/*   Updated: 2020/05/02 18:22:02 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	int		i;
	size_t	dsize;

	i = 0;
	dsize = 0;
	if (!dest)
		return (1);
	while (src[dsize])
		dsize++;
	if (!size)
		return (dsize);
	while (--size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
