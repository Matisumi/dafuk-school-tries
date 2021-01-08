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

SRCB1	=	ft_lstnew.c 	\
			ft_lstsize.c 	\
			ft_lstlast.c 	\
			ft_lstadd_back.c\
			ft_lstdelone.c 	\
			ft_lstclear.c 	\
			ft_lstiter.c 	\
			ft_lstmap.c 	\
			ft_lstadd_front.c

SRCB2	=	ft_free_ctab_bonus.c\
			ft_sort_tab_bonus.c \
			ft_strclr_bonus.c 	\
			ft_swap_bonus.c 

OBJP1	=	$(SRCP1:.c=.o)

OBJP2	=	$(SRCP2:.c=.o)

OBJB1	=	$(SRCB1:.c=.o)

OBJB2	=	$(SRCB2:.c=.o)

all :	$(NAME)

$(NAME):
		$(CC) -c $(SRCP1) $(SRCP2) $(CFLAGS)
		ar -rc $(NAME) $(OBJP1) $(OBJP2)
bonus :
		$(CC) -c $(SRCB1) $(SRCB2) $(CFLAGS)
		ar -rc $(NAME) $(OBJB1)	$(OBJB2)

clean :
		rm -f $(OBJP1) $(OBJP2) $(OBJB1) $(OBJB2)

fclean:	clean
		rm -f $(NAME)

re :	fclean all
