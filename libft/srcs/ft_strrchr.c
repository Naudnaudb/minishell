/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:29 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:29 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*toreturn;

	toreturn = 0;
	while (*str)
		if (*str++ == (char)c)
			toreturn = (char *)str - 1;
	if (*str == (char)c)
		toreturn = (char *)str;
	return (toreturn);
}
