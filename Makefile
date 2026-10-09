NAME  = libft.a

#complilador 
CC = cc
CFLAGS = -Wall -Wextra -Werror


SRC = ft_isalpha.c\
 		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strlen.c\
		ft_memset.c\
		ft_strlcat.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
     	ft_bzero.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		 ft_calloc.c \
		 ft_strdup.c \
		 ft_substr.c\
		 ft_strjoin.c\
		 ft_strtrim.c\
		 ft_split.c\
		 ft_strmapi.c\
		 ft_striteri.c\
		 ft_putchar_fd.c\
		 ft_putstr_fd.c\
		 ft_putendl_fd.c\
		 ft_putnbr_fd.c\
		 ft_lstnew.c\
		ft_lstadd_front.c
		


#that one to add all the .o inisdie SRC
OBJ = $(SRC:.c=.o)


RM = rm -f
AR = ar rcs

#Default Rule
all: $(NAME)

#implict rule fpor compiling
#cc -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


#ar -rcs libft.a *.o
# Package library
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Clean object files
clean:
	$(RM) $(OBJ)

# Clean all
fclean: clean
	$(RM) $(NAME)

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re


