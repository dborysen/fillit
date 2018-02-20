/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:24:47 by klee              #+#    #+#             */
/*   Updated: 2017/11/18 15:35:53 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct	s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}				t_list;

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char			*ft_itoa(int nbr);
void			ft_striter(char *s, void (*f)(char*));
size_t			ft_strlcat(char *s1, const char *s2, size_t size);
char			*ft_strncpy(char *dst, const char *src, size_t n);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstbck(t_list *lst, t_list *bck);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_alllst(t_list *list);
void			ft_lstdel(t_list **av, void (*del)(void*, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list			*ft_lstnew(const void *content, size_t size);
void			ft_putlst(t_list *list);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr_fd(int i, int fd);
void			ft_putstr_fd(char const *c, int fd);
void			ft_putchar_fd(char c, int fd);
char			**ft_strsplit(const char *s, char c);
char			*ft_strtrim(const char *s);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strmap(char const *s, char (*f)(char));
void			ft_putendl(const char *s);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
int				ft_strcmp(char *s1, char *s2);
int				ft_strequ(const char *s1, const char *s2);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_strclr(char *c);
void			ft_strdel(char **str);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
int				ft_toupper(int i);
int				ft_tolower(int i);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memccpy(void *restrict dst,\
		const void *restrict src, int c, size_t n);
void			*ft_memcpy(void *restrict dst, const void *restrict src,\
		size_t n);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
void			*ft_memset(void *b, int c, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_putnbr(int i);
size_t			ft_strlen(char *str);
char			*ft_strdup(const char *src);
void			ft_putstr(char *str);
char			*ft_strncat(char *s1, const char *s2, size_t n);
void			ft_putchar(char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strnstr(const char *big, const char *little, size_t len);

#endif
