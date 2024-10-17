/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpolat <bpolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:52:22 by bpolat            #+#    #+#             */
/*   Updated: 2024/10/17 13:32:57 by bpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_atoi(char *s);
void			ft_bzero(void *dest, size_t len);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(void *str, int c, size_t len);
int				ft_memcmp(void *s1, void *s2, size_t len);
void			*ft_memcpy(void *dest, void *src, size_t len);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *dest, int c, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putnbr(int nb);
void			ft_putstr_fd(char *s, int fd);
void			ft_putstr(char *str);
char			**ft_split(const char *str, const char *charset);
char			*ft_strchr(char *src, char c);
char			*ft_strdup(const char *s1);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int	ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(char *s1, char *s2, unsigned int len);
char			*ft_strnstr(char *str, char *to_find, size_t len);
char			*ft_strrchr(char *src, char c);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_substr(char const *str, unsigned int start, size_t len);
char			ft_tolower(char c);
char			ft_toupper(char c);
#endif
