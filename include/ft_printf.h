/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferna2 <alferna2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:24:36 by alferna2          #+#    #+#             */
/*   Updated: 2022/11/03 19:30:58 by alferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
//# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_check_format(va_list args, char *format);
int		ft_printf_char(char c);
int		ft_printf_ptr(unsigned long long ptr);
int		ft_printf_int(long long int n);
int		ft_printf_str(char *s);
int		ft_printf_ptr(unsigned long long ptr);
int		ft_put_hex(unsigned long num, char format);
int		ft_putnbr(long long int n, int len);
int		ft_putchar_fd(char c, int fd);

#endif
