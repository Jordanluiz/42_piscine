NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c solution.c verification.c verification2.c read_map1.c read_map2.c lib1.c lib2.c

all: $(NAME)

$(NAME):
	@echo
	@echo "-------------------------------------------"
	@echo "	Compiling files."
	@echo "-------------------------------------------"
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	@echo
	@echo "-------------------------------------------"
	@echo "	Cleaning output files, w flags."
	@echo "-------------------------------------------"
	/bin/rm -f *.o

fclean: clean
	@echo
	@echo "-------------------------------------------"
	@echo "	Cleaning executable file."
	@echo "-------------------------------------------"
	/bin/rm -f $(NAME)

re: fclean all
	@echo
	@echo "-------------------------------------------"
	@echo "	All files re-created."
	@echo "-------------------------------------------"
