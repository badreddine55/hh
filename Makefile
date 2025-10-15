CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FUNCTION = SRC1/ft_atoi.c SRC1/ft_isprint.c SRC1/ft_putchar_fd.c SRC1/ft_striteri.c SRC1/ft_strnstr.c \
           SRC1/ft_bzero.c SRC1/ft_itoa.c SRC1/ft_putendl_fd.c SRC1/ft_strjoin.c SRC1/ft_strrchr.c \
           SRC1/ft_calloc.c SRC1/ft_memchr.c SRC1/ft_putnbr_fd.c SRC1/ft_strlcat.c SRC1/ft_strtrim.c \
           SRC1/ft_isalnum.c SRC1/ft_memcmp.c SRC1/ft_putstr_fd.c SRC1/ft_strlcpy.c SRC1/ft_substr.c \
           SRC1/ft_isalpha.c SRC1/ft_memcpy.c SRC1/ft_split.c SRC1/ft_strlen.c SRC1/ft_tolower.c \
           SRC1/ft_isascii.c SRC1/ft_memmove.c SRC1/ft_strchr.c SRC1/ft_strmapi.c SRC1/ft_toupper.c \
           SRC1/ft_isdigit.c SRC1/ft_memset.c SRC1/ft_strdup.c SRC1/ft_strncmp.c



OBJ = ${FUNCTION:.c=.o}

all = ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o:%.c
	${CC} ${CFLAGS} -I. -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all