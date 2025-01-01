# variables ###################################################################
NAME		= libftprintf.a

CC			= gcc
CFLAGS		+= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs
RM			= rm -rf
# -I: specify additional directories with header files
INCLUDE		= -I include

OBJ_DIR		= ./obj/
SRC_DIR		= ./src/

LIBFT_DIR	= ./libft/
LIBFT		= $(LIBFT_DIR)libft.a

# files #######################################################################
SRC_NAMES	= ft_printf ft_print_char ft_print_str ft_print_dec \
			ft_print_unsigned_dec ft_print_hexadec ft_print_pointer \
			ft_print_digits
SRC_FILES	= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_NAMES)))
OBJ_FILES	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_NAMES)))

# rules #######################################################################

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJ_DIR) $(OBJ_FILES)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_FILES)

$(LIBFT):
	make -C $(LIBFT_DIR) all
# NOTE: might add @ b4 make to rm verbosity here

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
# -p/--parents: create all necessary dirs, no error if exists already

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJ_DIR)

fclean:		clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re:			fclean all

# local testing ###############################################################
# MAIN_NAME = main

# $(MAIN_NAME): $(SRC_DIR)main.c $(NAME) $(OBJ_DIR) $(OBJ_FILES)
# 	$(CC) $(CFLAGS) -DDEBUG -std=c99 $(SRC_DIR)main.c -L. -lftprintf -o $@

# run: $(MAIN_NAME)
# 	./$(MAIN_NAME)

# directives ##################################################################
.PHONY:		all clean fclean re

.DEFAULT:	all
