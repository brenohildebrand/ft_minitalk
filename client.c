/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:49:57 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/06 01:49:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: ./client <server-pid> <string>\n");
		return (0);
	}

	// validate pid
	// validate string

	// for each bit of each byte/char of the string, send the SIGUSR1 if
	// it is on, or the SIGUSR2 otherwise. 

	return (0);
}