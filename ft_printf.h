/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:12:29 by samarnah          #+#    #+#             */
/*   Updated: 2025/09/13 12:14:11 by samarnah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_hexalower(unsigned int x);
int	ft_hexaupper(unsigned int x);
int	ft_unsignedecimal(unsigned int nb);
int	ft_pointer(void *p);
int	ft_printf(const char *format, ...);

#endif
