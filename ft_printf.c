/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:10:51 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 13:08:47 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	real(char s, va_list args)
{
	int	i;

	i = 0;
	if (s == '%')
		i += ft_putchar('%');
	else if (s == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (s == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (s == 'd' || s == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (s == 'x')
		i += ft_hexalower(va_arg(args, unsigned int));
	else if (s == 'X')
		i += ft_hexaupper(va_arg(args, unsigned int));
	else if (s == 'u')
		i += ft_unsignedecimal(va_arg(args, unsigned int));
	else if (s == 'p')
		i += ft_pointer(va_arg(args, void *));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		j;
	int		count;
	va_list	args;

	j = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%' && format[j + 1] != '\0')
		{
			count += real(format[j + 1], args);
			j++;
		}
		else if (format[j] == '%' && format[j + 1] == '\0')
			j++;
		else
			count += write(1, &format[j], 1);
		j++;
	}
	va_end(args);
	return (count);
}

/* int main()
{
	ft_printf(" %d ", -1);
	printf(" %d ", -1);
} */
