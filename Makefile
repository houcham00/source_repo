##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## cpoolday06
##

SRC	=	strncpy.c

SOC	=	tests/test_my_revstr.c

OBJ	=	$(SRC:.c=.o)

OBC	=	$(SOC:.c=.o)

NAME	=	day06

TEST	=	unit_tests

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

$(TEST):	$(OBC)
	gcc -o $(TEST) $(OBC)

clean:
	rm -f $(OBJ) *~ *# *.gcno
	rm -f $(OBC)

fclean:	clean
	rm -f $(NAME) $(TEST)

tests_run:
	gcc -o $(TEST) -lcriterion --coverage
	./$(TEST)

re:	all clean

.PHONY: all clean tests_run
