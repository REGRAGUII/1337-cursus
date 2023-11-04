#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int	ft_tolower(int x);
int	ft_isalnum(int x);
int	ft_isalpha(int x);
int	ft_isascii(int x);
int	ft_isdigit(int x);
int	ft_isprint(int x);
int	ft_toupper(int x);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);

size_t	ft_strlen(const char *s);

# endif