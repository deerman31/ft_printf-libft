NAME		:= libft.a

CC			:= cc

CFLAGS		:= -Wall -Wextra -Werror 

INC			:= includes

AR			:= ar

ARF			:= rcs

SRCS := ./ctype/ft_isalpha.c ./ctype/ft_isdigit.c ./ctype/ft_isalnum.c ./ctype/ft_isascii.c ./ctype/ft_isprint.c ./ctype/ft_toupper.c ./ctype/ft_tolower.c \
./string/ft_strdup.c ./string/ft_strndup.c ./string/ft_strlen.c ./string/ft_strlcpy.c ./string/ft_strlcat.c ./string/ft_strchr.c ./string/ft_strrchr.c ./string/ft_strncmp.c ./string/ft_memset.c ./string/ft_memcpy.c ./string/ft_memmove.c ./string/ft_memchr.c ./string/ft_memcmp.c ./string/ft_strnstr.c \
./strings/ft_bzero.c \
./stdlib/ft_atoi.c ./stdlib/ft_calloc.c ./stdlib/ft_atol.c \
./original/ft_substr.c ./original/ft_strjoin.c ./original/ft_strtrim.c ./original/ft_split.c ./original/ft_itoa.c ./original/ft_ltoa.c ./original/ft_strmapi.c ./original/ft_striteri.c ./original/vers_strlen.c \
./put/ft_putchar_fd.c ./put/ft_putstr_fd.c ./put/ft_putendl_fd.c ./put/ft_putnbr_fd.c \
./lst/dclst/src/dclst_add_back.c ./lst/dclst/src/dclst_add_front.c ./lst/dclst/src/dclst_free.c ./lst/dclst/src/dclst_new.c ./lst/dclst/src/dclst_pop.c ./lst/dclst/src/dc_node_new.c \
./lst/dlst/dlst_add_back.c ./lst/dlst/dlst_add_front.c ./lst/dlst/dlst_free.c ./lst/dlst/dlst_new.c ./lst/dlst/dlst_pop.c ./lst/dlst/d_node_new.c \

OBJS := $(SRCS:.c=.o)

BONUS_SRCS := ./lst/ft_lstnew.c ./lst/ft_lstadd_front.c ./lst/ft_lstsize.c ./lst/ft_lstlast.c ./lst/ft_lstadd_back.c ./lst/ft_lstdelone.c ./lst/ft_lstclear.c ./lst/ft_lstiter.c ./lst/ft_lstmap.c \

BONUS_OBJS := $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@
	$(AR) $(ARF) $(NAME) $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:
	make clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
