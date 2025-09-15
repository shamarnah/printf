/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:33:52 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 13:07:36 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalower(unsigned int x)
{
	int		count;
	char	c;

	c = 'a';
	count = 0;
	if (x >= 16)
	{
		count += ft_hexalower(x / 16);
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

/* int main()
{
	printf("%d\n", ft_hexalower(25));
} */