/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abordack <abordack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 19:37:24 by abordack          #+#    #+#             */
/*   Updated: 2020/05/01 19:37:24 by abordack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	u_n;

	u_n = (unsigned int)nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		u_n = (unsigned int)(-1 * nb);
	}
	if (u_n > 9)
	{
		ft_putnbr_fd(u_n / 10, fd);
		ft_putchar_fd('0' + u_n % 10, fd);
	}
	else
		ft_putchar_fd('0' + u_n, fd);
}
