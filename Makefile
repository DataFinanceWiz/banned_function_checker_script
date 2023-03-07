##
## EPITECH PROJECT, 2022
## my_hunter
## File description:
## my hunter makefile
##

TST =	source/my_printf/my_strlen.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_getnbr.c	\
		source/my_printf/my_strcmp.c	\

STST =	tests/test_my_strlen.c	\
		tests/test_my_putstr.c	\
		tests/test_my_getnbr.c	\

SRC	=	source/basic.c	\
		source/counters.c	\
		source/tabs.c	\
		source/move_p.c	\
		source/count_char.c	\
		source/errors_handling.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_strlen.c	\
		source/my_printf/my_strcpy.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_print_hexa.c	\
		source/my_printf/my_printx.c	\
		source/my_printf/print_p.c	\
		source/my_printf/float.c	\
		source/my_printf/my_putnbu.c	\
		source/my_printf/print_b.c	\
		source/my_printf/print_o.c	\
		source/my_printf/my_printf.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):
	@echo "Compiling..."
	@gcc $(SRC) -lncurses -o $(NAME) -g3
	@echo "Compilation done..."

clean:
	@echo -e "Cleaning up..."
	@rm -f $(OBJ)
	@echo "Cleaning up done :)..."

fclean:	clean
	@echo -e "Removing backup and temporary files..."
	@rm -f $(NAME)
	@rm -f *~
	@rm -f *#
	@rm -f unit_tests
	@echo "Removing done :)..."

re:	fclean all

tests_run:	$(OBG)
	gcc -o unit_tests $(TST) $(STST) --coverage -lcriterion
	./unit_tests
