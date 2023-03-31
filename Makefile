NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= -src

INC		= ./libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJS	= $(SRCS:.c=.o)

OBJ_FILES = $(OBJS)

all		: $(NAME)

# bonus	:
# 	make WITH_BONUS=1

clean	:
	rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re		:
	make fclean
	make all

$(NAME)	: $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

%.o		: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

.PHONY	: all bonus clean fclean re