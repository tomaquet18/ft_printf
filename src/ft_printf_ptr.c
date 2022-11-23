/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:59:59 by alferna2          #+#    #+#             */
/*   Updated: 2022/11/03 19:17:49 by alferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long num, char format)
{
	char	*hex;
	int		len;
	int		aux;

	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	len = 0;
	aux = 0;
	if (num >= 16)
	{
		aux = ft_put_hex(num / 16, format);
		if (aux == -1)
			return (-1);
		len += aux;
		aux = ft_put_hex(num % 16, format);
		if (aux == -1)
			return (-1);
		len += aux;
	}
	else
		len += ft_putchar_fd(hex[num % 16], 1);
	return (len);
}

int	ft_printf_ptr(unsigned long long ptr)
{
	int	len;
	int	aux;

	len = 0;
	aux = write(1, "0x", 2);
	if (aux == -1)
		return (-1);
	len += aux;
	if (ptr == 0)
	{
		aux = write(1, "0", 1);
		if (aux == -1)
			return (-1);
		len += aux;
	}
	else
	{
		aux = ft_put_hex(ptr, 'x');
		if (aux == -1)
			return (-1);
		len += aux;
	}
	return (len);
}
