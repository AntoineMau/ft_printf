# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 03:03:10 by mapandel          #+#    #+#              #
#    Updated: 2017/04/25 00:58:11 by mapandel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

#			Compilation

CC = 		clang
CFLAGS = 	-Wall -Wextra -Werror -Weverything

#			Sources

SRC =		ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isblank.c \
			ft_iscntrl.c \
			ft_isdigit.c \
			ft_isgraph.c \
			ft_isinf.c \
			ft_islessinf.c \
			ft_islower.c \
			ft_isnan.c \
			ft_isprint.c \
			ft_ispunct.c \
			ft_isspace.c \
			ft_isupper.c \
			ft_isxdigit.c \
			ft_itoa.c \
			ft_lltoabase_signed.c \
			ft_lltoabase_signless.c \
			ft_lltoabase_unsigned.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putllnbr.c \
			ft_putmap.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_putwchar.c \
			ft_putwchar_fd.c \
			ft_putwendl.c \
			ft_putwendl_fd.c \
			ft_putwstr.c \
			ft_putwstr_fd.c \
			ft_stradd.c \
			ft_stradd_leakless.c \
			ft_strcat.c \
			ft_strccat.c \
			ft_strccmp.c \
			ft_strccpy.c \
			ft_strchr.c \
			ft_strcjoin.c \
			ft_strcjoin_leakless.c \
			ft_strclen.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_strfill.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strjoin_leakless.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strplugc.c \
			ft_strrchr.c \
			ft_strrev.c \
			ft_strrev_leakless.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strsub_leakless.c \
			ft_strtolower.c \
			ft_strtolower_leakless.c \
			ft_strtoupper.c \
			ft_strtoupper_leakless.c \
			ft_strtrim.c \
			ft_tabcpy.c \
			ft_tabfill.c \
			ft_tablen.c \
			ft_tabncpy.c \
			ft_tabnew.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_wstrcat.c \
			ft_wstrcpy.c \
			ft_wstrdel.c \
			ft_wstrdup.c \
			ft_wstrfill.c \
			ft_wstrjoin.c \
			ft_wstrjoin_leakless.c \
			ft_wstrlen.c \
			ft_wstrlenuni.c \
			ft_wstrnew.c \
			ft_wstrsub.c \
			ft_wstrsub_leakless.c \
			get_next_line.c \
			get_next_char.c

OBJ =		$(SRC:.c=.o)

#			Colors

DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

#			Main Rules

.PHONY: all re glu affcompil clean fclean

$(NAME):
	@make affcompil
	@echo "$(GRE)--::Libft Indextion::--$(DEF)"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

re: fclean all

glu: fclean all clean

#			Compilation Rules

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

affcompil:
	@echo "$(BLU)--::Libft Compilation::--$(DEF)"
	@make $(OBJ)

#			Clean Rules

clean:
	@echo "$(PUR)--::Libft Binary Delection::--$(DEF)"
	@rm -rf $(OBJ)

fclean: clean
	@echo "$(RED)--::Libft.a Delection::--$(DEF)"
	@rm -rf $(NAME)
