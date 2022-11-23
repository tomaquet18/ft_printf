/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:20:20 by alferna2          #+#    #+#             */
/*   Updated: 2022/11/03 18:26:37 by alferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long int n, int len)
{
	if (n < 0)
	{
		if (ft_printf_char('-') != 1)
			return (-1);
		len++;
		n = -n;
	}
	if (n > 9)
		len = ft_putnbr(n / 10, len);
	if (len == -1)
		return (-1);
	if (write(1, &"0123456789"[n % 10], 1) != 1)
		return (-1);
	len++;
	return (len);
}

int	ft_printf_int(long long int n)
{
	int	len;

	len = 0;
	len = ft_putnbr(n, len);
	if (len == -1)
		return (-1);
	return (len);
}
