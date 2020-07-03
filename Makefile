NAME	=	libft.a

CC		=	gcc

CFLAGS	+=	-I ./
CFLAGS	+=	-Wall -Werror -Wextra

SRCP1	=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c

SRCP2	=	ft_substr.c 	\
			ft_strjoin.c 	\
			ft_strtrim.c 	\
			ft_split.c 		\
			ft_itoa.c 		\
			ft_strmapi.c 	\
			ft_putchar_fd.c \
			ft_putstr_fd.c  \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJP1	=	$(SRCP1:.c=.o)

OBJP2	=	$(SRCP2:.c=.o)

all :	$(NAME) clean

$(NAME):
		$(CC) -c $(SRCP1) $(SRCP2) $(CFLAGS)
		ar -rc $(NAME) $(OBJP1) $(OBJP2)

clean :
		rm -f $(OBJP1) $(OBJP2)

fclean:	clean
		rm -f $(NAME)

re :	fclean all