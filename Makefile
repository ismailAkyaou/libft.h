
SOURCES		=	ft_isascii.c    ft_memcpy.c     ft_putstr_fd.c  ft_strlcat.c    ft_strrchr.c\
				ft_atoi.c       ft_isdigit.c    ft_memmove.c    ft_split.c      ft_strlcpy.c    ft_strtrim.c\
				ft_bzero.c      ft_isprint.c    ft_memset.c     ft_strchr.c     ft_strlen.c     ft_substr.c\
				ft_calloc.c     ft_itoa.c       ft_putchar_fd.c ft_strdup.c     ft_strmapi.c    ft_tolower.c\
				ft_isalnum.c    ft_memchr.c     ft_putendl_fd.c ft_striteri.c   ft_strncmp.c    ft_touppwe.c\
				ft_isalpha.c    ft_memcmp.c     ft_putnbr_fd.c  ft_strjoin.c    ft_strnstr.c
OBJECTS		=	${SOURCES:.c=.o} 	

NAME		=	libft.a
CFLAGS		=	-Wall -Wextra -Werror
COMPILER	=	cc
APPEND		=	ar -rc
DELETE		=	rm -f

%.o:	%.c libft.h
	${COMPILER} ${CFLAGS} -c $< -o $@

all:	${NAME}

${NAME}:	${OBJECTS} libft.h
	${APPEND} ${NAME} ${OBJECTS} 

clean:
	${DELETE} ${OBJECTS}

fclean: clean
	${DELETE} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
