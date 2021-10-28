/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:31 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:31 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*toreturn;
	int		i;

	i = 0;
	toreturn = (char *)malloc(len + 1);
	if (!s || !toreturn)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start + i] && len--)
		{
			toreturn[i] = s[start + i];
			i++;
		}
	}
	toreturn[i] = 0;
	return (toreturn);
}
