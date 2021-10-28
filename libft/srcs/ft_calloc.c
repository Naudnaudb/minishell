/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:26:24 by abordack          #+#    #+#             */
/*   Updated: 2020/05/07 21:33:47 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
