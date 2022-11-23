/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:11:47 by alferna2          #+#    #+#             */
/*   Updated: 2022/11/03 19:18:00 by alferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, char *format)
{
	if (*format == 'c')
		return (ft_printf_char(va_arg(args, int)));
	else if (*format == 's')
		return (ft_printf_str(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_printf_ptr(va_arg(args, unsigned long long)));
	else if (*format == 'd' || *format == 'i')
		return (ft_printf_int(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_printf_int(va_arg(args, unsigned int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_put_hex(va_arg(args, unsigned int), *format));
	else if (*format == '%')
		return (ft_printf_char('%'));
	return (-1);
}

int static	ft_secure_write(int i, const char *format)
{
	int	aux;

	aux = ft_putchar_fd(format[i], 1);
	if (aux != -1)
		return (aux);
	return (-1);
}

int static	ft_secure_check_format(va_list args, const char *format, int i)
{
	int	aux;

	aux = ft_check_format(args, (char *)(format + i));
	if (aux != -1)
		return (aux);
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		aux;

	i = 0;
	len = 0;
	aux = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			aux = ft_secure_check_format(args, format, i);
		}
		else
			aux = ft_secure_write(i, format);
		if (aux == -1)
			return (-1);
		len += aux;
		i++;
	}
	va_end(args);
	return (len);
}
