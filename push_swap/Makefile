
NAME    = push_swap
CC      = gcc -Ofast
CFLAGS  = -Wall -Wextra #-Werror
HEADER      = ./incs/push_swap.h
OBJ_PATH    = ./objs
SRC_PATH    = ./srcs

SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

SOURCES = ft_split.c get_info.c list_utils.c main.c operations1.c operations2.c operations3.c parsing.c solve_5_or_less.c solve_5_or_less_b.c solve.c start.c utils.c utils2.c
            
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER) Makefile
			@mkdir -p objs
			@${CC} ${CFLAGS} -c $< -o $@

all:        ${NAME}

${NAME}:    ${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		@rm -f ${OBJS}

fclean: clean
		@rm -f ${NAME}

re: fclean
	@${MAKE} all

.PHONY: all clean fclean re