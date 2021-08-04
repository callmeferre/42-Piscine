/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:43:34 by acastril          #+#    #+#             */
/*   Updated: 2021/08/04 11:22:41 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

//Libc functions

int		ft_isalpha(int	c);
int		ft_isdigit(int	c);
int		ft_isalnum(int	c);
int		ft_isascii(int	c);
int		ft_isprint(int	c);

void	ft_bzero(void *dest, size_t len);

void	*ft_memchr(const void	*str, int	c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *dest, int c, size_t len);

char	*ft_strchr(const char *str, int	c);
char	*ft_strrchr(const char *str, int	c);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
size_t	ft_strlcpy(char *dest, char *src, size_t len);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char	*str);
int		ft_strncmp(char	*s1, char	*s2, size_t	n);
char	*ft_strnstr(const char	*str, const char	*to_find, size_t len);

int		ft_tolower(int	c);
int		ft_toupper(int	c);

int		ft_atoi(char	*str);

void	*ft_calloc(size_t count, size_t size);

//Additional functions

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
