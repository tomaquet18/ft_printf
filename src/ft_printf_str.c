/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:44:29 by alferna2          #+#    #+#             */
/*   Updated: 2022/11/03 16:59:59 by alferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *s)
{
	int	i;
	int	len;
	int	aux;

	i = 0;
	len = 0;
	if (s == NULL)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	while (*s)
	{
		aux = ft_printf_char(*(s++));
		if (aux == -1)
			return (-1);
		len += aux;
		i++;
	}
	return (len);
}
