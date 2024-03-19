NAME     = libft.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
AR       = ar
ARFLAGS  = -rc
INC      = ./libft.h
SRCDIR   = ./srcs
INCDIR   = ./includes
OBJDIR   = ./obj

SRCS     = $(wildcard $(SRCDIR)/*.c)
SRCS_B   = $(wildcard $(SRCDIR)/*_bonus.c)
OBJ_FILES   = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))
OBJ_FILES_B = $(addprefix $(OBJDIR)/, $(notdir $(SRCS_B:.c=.o)))

.PHONY: all bonus clean fclean re

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(NAME): $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

$(OBJDIR):
	mkdir -p $(OBJDIR)

bonus: $(OBJ_FILES_B) $(OBJ_FILES)
	$(AR) $(ARFLAGS) $(NAME) $^
	touch bonus

clean:
	rm -rf $(OBJDIR)
	rm -f bonus

fclean: clean
	rm -f $(NAME)

re: fclean all
