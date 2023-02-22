/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:31:51 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/05 17:43:53 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MINITALK_H
#define MINITALK_H

# include <stdlib.h>
# include <signal.h>
# include <stdio.h>
# include <unistd.h>

int	ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
int	ft_isdigit(int c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);

#endif