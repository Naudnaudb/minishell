/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:26 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:26 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
		if (*str++ == (char)c)
			return ((char *)(--str));
	if (*str == (char)c)
		return ((char *)(str));
	return (0);
}
