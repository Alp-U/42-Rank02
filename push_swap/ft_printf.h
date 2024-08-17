/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: autku <autku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:15:10 by autku             #+#    #+#             */
/*   Updated: 2024/05/10 10:21:53 by autku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		print_char(int c);

int		print_str(char *str);

int		print_digit(long n, int base);

int		get_digit(unsigned int n);

char	*ft_uitoa(unsigned int n);

int		print_udigit(unsigned int n);

int		print_hexc(long n, int base);

int		print_ptr(void *ptr);

int		print_format(char specifier, va_list ap);

int		ft_printf(const char *format, ...);

#endif
