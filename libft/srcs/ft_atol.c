/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 07:55:39 by abordack          #+#    #+#             */
/*   Updated: 2021/10/22 07:55:41 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long	ft_atol(const char *str)
{
	long	nbr;
	int		n;

	nbr = 0;
	n = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr * n);
}
