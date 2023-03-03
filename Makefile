LIB_NAME := libft.a
HEADER_FILE := libft.h

SRC_DIR := srcs
OBJS_DIR := obj
HEADER_DIR := includes

SRC_FILES := ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c
OBJECTS := $(SRC_FILES:.c=.o)

SRC_PATHS := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ_PATHS := $(addprefix $(OBJS_DIR)/, $(OBJECTS))
HEADER_PATHS = $(addprefix $(HEADER_DIR)/, $(HEADER_FILE))

CC := cc
CFLAGS := -Wall -Wextra -Werror

all : directories $(LIB_NAME)

directories : $(OBJS_DIR)/

$(OBJS_DIR)/ :
	$(info $(shell mkdir -p $@))

$(OBJS_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

$(LIB_NAME) : $(OBJ_PATHS)
	ar -rc $@ $^
	ranlib $@

test: $(LIB_NAME)
	./libft-war-machine/grademe.sh -op1

clean :
	rm -f $(OBJ_PATHS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re test directories