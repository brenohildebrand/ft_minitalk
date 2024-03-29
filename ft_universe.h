/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_universe.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:11:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/26 16:46:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNIVERSE_H
# define FT_UNIVERSE_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *nptr);
void	print_int(int value);
void	print_cstring(char *cstring);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif