/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:47:39 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 12:26:39 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexalower2(unsigned long x)
{
	int		count;
	char	c;

	c = 'a';
	count = 0;
	if (x >= 16)
	{
		count += ft_hexalower2(x / 16);
		x = x % 16;
	}
	if (x % 16 > 9 && x % 16 < 16)
	{
		c = c + ((x % 16) - 10);
		count += write(1, &c, 1);
	}
	else
	{
		c = x + '0';
		count += write(1, &c, 1);
	}
	return (count);
}

int	ft_pointer(void *p)
{
	int	x;

	x = 0;
	if (p == 0)
		return (write(1, "(nil)", 5));
	else
	{
		x += write(1, "0x", 2);
		x += ft_hexalower2((unsigned long)p);
	}
	return (x);
}

/* int main()
{
    ft_printf(" %p ", 16);
	printf(" %p ", 16);
} */