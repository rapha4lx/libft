/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:44:00 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 18:47:06 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIB_FT
# define LIB_FT

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

int	ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(char *str);

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);

# endif
