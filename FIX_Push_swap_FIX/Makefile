NAME = checker
EMAN = push_swap

CHECK_FILES = ./checker_files/
PUSH_FILES  = ./push_swap_files/

LIBRARY_NAME = libft.a
LIBRARY_DIR = ./libft/
LIBRARY = $(addprefix $(LIBRARY_DIR), $(LIBRARY_NAME))

FLAGS = -Wall -Werror -Wextra

CHECKER_FUNCTIONS =	checker.c \
					unctionsfay.c \
					functions.c \
					errors.c \

PUSH_SWAP_FUNCTIONS =	push_swap.c \
						ertioninay.c \
						unctionsfay.c \
						errors.c \
						extra.c \
						extra2.c \
						extra3.c \
						extra4.c \

C_FILES = $(addprefix $(CHECK_FILES), $(CHECKER_FUNCTIONS))
C_FILES2 = $(addprefix $(PUSH_FILES), $(PUSH_SWAP_FUNCTIONS))

@CHECK_OBJECTS = $(CHECK_FILES:.c=.o)

@PUSH_OBJECTS = $(PUSH_FILES:.c=.o)

all: $(NAME) $(EMAN)

$(NAME): $(LIBRARY_NAME) 
	@echo "::: CREATING (CHECKER) :::"
	@gcc $(FLAGS) -o $(NAME) $(C_FILES) $(LIBRARY) 
	@echo "--- CHECKER ---"

$(EMAN): $(LIBRARY NAME)
	@echo "::: CREATING (PUSH SWAP) :::"
	@gcc $(FLAGS) -o $(EMAN) $(C_FILES2) $(LIBRARY)
	@echo "--- PUSH SWAP ---"

$(LIBRARY_NAME):
	@echo "::: CREATING (LIBFT) :::"
	@make -C $(LIBRARY_DIR)
	@echo "--- LIBFT ---"

clean:
	@echo ">>> !!! CLEANING !!! <<<"
	@make clean -C $(LIBRARY_DIR)
	@echo ">>> CLEAN ! <<<"

fclean:
	@echo ">>> !!! CLEANING !!! <<<"
	@/bin/rm -f $(NAME) $(EMAN)
	@make fclean -C $(LIBRARY_DIR)
	@echo ">>> FCLEAN ! <<<"

re: fclean all

done: re clean
