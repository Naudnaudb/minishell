/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:26 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:26 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *src)
{
	char	*dupli;
	int		i;

	i = 0;
	dupli = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dupli)
		return (NULL);
	while (src[i])
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = 0;
	return (dupli);
}
