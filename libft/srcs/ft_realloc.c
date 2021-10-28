/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:05:45 by abordack          #+#    #+#             */
/*   Updated: 2021/04/28 14:05:47 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, int size, int newsize)
{
	char	*str;
	char	*new;
	int		i;

	str = (char *)ptr;
	new = (char *)malloc(newsize);
	if (!new)
	{
		if (ptr && size != 0)
			free(ptr);
		return (NULL);
	}
	i = -1;
	while (++i < size)
		new[i] = str[i];
	if (ptr && size != 0)
		free(ptr);
	return (new);
}
