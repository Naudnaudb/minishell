/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:27 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:27 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*toret;
	unsigned int	i;

	toret = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !toret)
		return (NULL);
	i = -1;
	while (s[++i])
		toret[i] = f(i, s[i]);
	toret[i] = 0;
	return (toret);
}
