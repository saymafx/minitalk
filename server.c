/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:14:49 by tidigov           #+#    #+#             */
/*   Updated: 2022/03/05 17:56:18 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    sig_handler(int sig)
{
    static int  i = 0;
    static char c = 0;

    if (sig == SIGUSR1)
        c |= 1 << i;
    i++;
    if (i == 8)
    {
        write (1, &c, 1);
        i = 0;
        c = 0;
    }
}

int main (void)
{
	struct sigaction	str;
    pid_t	pid;
	
	str.sa_flags = 0;
    str.sa_handler = sig_handler;
	pid = getpid();
    sigaction(SIGUSR1, &str, NULL);
	sigaction(SIGUSR2, &str, NULL);
    ft_putnbr_fd(pid, 1);
    write(1, " ", 1);
	while (1)
		pause();
    return(0);
}
