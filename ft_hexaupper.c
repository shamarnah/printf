/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:39:11 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 12:37:47 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaupper(unsigned int x)
{
	int		count;
	char	c;

	c = 'A';
	count = 0;
	if (x >= 16)
	{
		count += ft_hexaupper(x / 16);
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
	printf("%d\n", ft_hexaupper(479));
} */