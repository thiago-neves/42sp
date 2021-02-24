/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tneves <tneves@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 11:26:05 by tneves            #+#    #+#             */
/*   Updated: 2020/09/02 16:05:06 by tneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

char			*ft_strndup(const char *s, size_t length);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_atoi(const char *str);
void			ft_bzero(void *s2, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
char			*ft_itoa(int n);
char			*ft_itoa_base(long nbr, char *base, int b_len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
char			*ft_memchr(void *s, char c, int n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
int				ft_numlen(int n, int minus);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr(char const *str);
void			ft_putstr_fd(char *str, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strdup(const char *src);
int				ft_strfree(char	**cache, int ret);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strlast(char const *str, char const *last);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *src);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strnbr(char *s);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strndup(const char *s1, size_t size);
char			*ft_strnew(size_t size);
char			*ft_strnjoin(char const *s1, char const *s2, ssize_t r_size);
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_utoa_base(unsigned int n, char *base, int b_len);
#endif
