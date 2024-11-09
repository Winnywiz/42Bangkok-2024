/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:51:14 by skanin            #+#    #+#             */
/*   Updated: 2024/11/09 17:48:18 by skanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
void	ft_int(int n, int *length);
void	ft_unsigned(unsigned int n, int *length);
void	ft_hex(unsigned int n, char c, int *length);
int		ft_pointer(unsigned long n);
#endif
