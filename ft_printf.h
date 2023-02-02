/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sutku <sutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 06:02:57 by sutku             #+#    #+#             */
/*   Updated: 2022/10/31 03:01:32 by sutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int					ft_printf(const char *format, ...);
unsigned int		ft_putstr_fd(char *s, int fd);
unsigned int		ft_pointer(unsigned long long int n);
unsigned int		ft_decimal(int n);
unsigned int		ft_uns_decimal(unsigned int n);
unsigned int		ft_hexadecimal(unsigned int n, char c);
unsigned int		ft_putchar(char c, int fd);

#endif