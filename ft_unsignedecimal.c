/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:44:51 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/07 16:59:57 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedecimal(unsigned int nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_unsignedecimal(nb / 10);
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
    ft_unsginedecimal(25);
} */
