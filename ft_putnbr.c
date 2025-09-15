/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:54:26 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 12:36:26 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		count += write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		count += write(1, &c, 1);
	}
	return (count);
}

/* int main()
{
    ft_putnbr(25);
    write (1, "\n", 1);
} */