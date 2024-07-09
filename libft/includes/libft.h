#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include "dc_lst.h"
#include "d_lst.h"

int			ft_isalpha(int);
int			ft_isdigit(int);
int			ft_isalnum(int);
int			ft_isascii(int);
int			ft_isprint(int);
size_t		ft_strlen(const char *);
void		*ft_memset(void *, int, size_t);
void		ft_bzero(void *, size_t);
void		*ft_memcpy(void *, const void *, size_t);
void		*ft_memmove(void *, const void *, size_t);
size_t		ft_strlcpy(char *, const char *, size_t);
size_t		ft_strlcat(char *, const char *, size_t);

int			ft_toupper(int);
int			ft_tolower(int);
char		*ft_strchr(const char *, int);
char		*ft_strrchr(const char *, int);
int			ft_strncmp(const char *, const char *, size_t);
void		*ft_memchr(const void *, int, size_t);
int			ft_memcmp(const void *, const void *, size_t);
char		*ft_strnstr(const char *, const char *, size_t);
int			ft_atoi(const char *);
long		ft_atol(const char *);

void		*ft_calloc(size_t, size_t);
char		*ft_strdup(const char *);
char		*ft_strndup(const char *, size_t);
char		*ft_substr(char const *, unsigned int, size_t);
char		*ft_strjoin(char const *, char const *);
char		*ft_strtrim(char const *, char const *);
char		**ft_split(char const *, char);
char		*ft_itoa(int);
char		*ft_ltoa(long);
char		*ft_strmapi(char const *, char (*f)(unsigned int, char));
void		ft_striteri(char *, void (*f)(unsigned int, char*));
int			ft_putchar_fd(char, int);
int			ft_putstr_fd(char *, int);
int			ft_putendl_fd(char *, int);
int			ft_putnbr_fd(int, int);
size_t		vers_strlen(const char *, const char *);

//単方向リスト
typedef struct s_list {
	void			*content;
	struct s_list	*next;
} t_list;

t_list		*ft_lstnew(void *);
void		ft_lstadd_front(t_list **, t_list *);
int			ft_lstsize(t_list *);
t_list		*ft_lstlast(t_list *);
void		ft_lstadd_back(t_list **, t_list *);
void		ft_lstdelone(t_list *, void (*del)(void *));
void		ft_lstclear(t_list **, void (*del)(void *));
void		ft_lstiter(t_list *, void (*f)(void *));
t_list		*ft_lstmap(t_list *, void *(*f)(void *), void (*del)(void *));

#endif
