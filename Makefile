
NAME    = push_swap
CC      = gcc -Ofast
CFLAGS  = -Wall -Wextra #-Werror
PINK = \033[1;35m
HEADER      = ./incs/push_swap.h
OBJ_PATH    = ./objs
SRC_PATH    = ./srcs

SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

SOURCES = ft_split.c get_info.c list_utils.c main.c operations1.c operations2.c operations3.c parsing.c solve_5_from_start.c solve_4_or_less.c solve_4_or_less_b.c solve.c start.c utils.c utils2.c utils3.c final.c
            
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

mandelbrot:
	@echo "${PINK}	 	.............::::::::::::::::::::::::::::::::::::::::::::::::.......................$(END)"
	@echo "${PINK}		.........::::::::::::::::::::::::::::::::::::::::::::::::::::::::...................$(END)"
	@echo "${PINK}		.....::::::::::::::::::::::::::::::::::-----------:::::::::::::::::::...............$(END)"
	@echo "${PINK}		...:::::::::::::::::::::::::::::------------------------:::::::::::::::.............$(END)"
	@echo "${PINK}		:::::::::::::::::::::::::::-------------;;;!:H!!;;;--------:::::::::::::::..........$(END)"
	@echo "${PINK}		::::::::::::::::::::::::-------------;;;;!!/>&*|I !;;;--------::::::::::::::........$(END)"
	@echo "${PINK}		::::::::::::::::::::-------------;;;;;;!!/>)|.*#|>/!!;;;;-------::::::::::::::......$(END)"
	@echo "${PINK}		::::::::::::::::-------------;;;;;;!!!!//>|:    !:|//!!!;;;;-----::::::::::::::.....$(END)"
	@echo "${PINK}		::::::::::::------------;;;;;;;!!/>)I>>)||I#     H&))>////*!;;-----:::::::::::::....$(END)"
	@echo "${PINK}		::::::::----------;;;;;;;;;;!!!//)H:  #|              IH&*I#/;;-----:::::::::::::...$(END)"
	@echo "${PINK}		:::::---------;;;;!!!!!!!!!!!//>|.H:                     #I>/!;;-----:::::::::::::..$(END)"
	@echo "${PINK}		:----------;;;;!/||>//>>>>//>>)|%                         %|&/!;;----::::::::::::::.$(END)"
	@echo "${PINK}		--------;;;;;!!//)& |;I*-H#&||&/                           *)/!;;-----::::::::::::::$(END)"
	@echo "${PINK}		-----;;;;;!!!//>)IH:-        ##                            #&!!;;-----::::::::::::::$(END)"
	@echo "${PINK}		;;;;!!!!!///>)H%.**           *                            )/!;;;------:::::::::::::$(END)"
	@echo "${PINK}									 &)/!!;;;------:::::::::::::$(END)"
	@echo "${PINK}		;;;;!!!!!///>)H%.**           *                            )/!;;;------:::::::::::::$(END)"
	@echo "${PINK}		-----;;;;;!!!//>)IH:-        ##                            #&!!;;-----::::::::::::::$(END)"
	@echo "${PINK}		--------;;;;;!!//)& |;I*-H#&||&/                           *)/!;;-----::::::::::::::$(END)"
	@echo "${PINK}		:----------;;;;!/||>//>>>>//>>)|%                         %|&/!;;----::::::::::::::.$(END)"
	@echo "${PINK}		:::::---------;;;;!!!!!!!!!!!//>|.H:                     #I>/!;;-----:::::::::::::..$(END)"
	@echo "${PINK}		::::::::----------;;;;;;;;;;!!!//)H:  #|              IH&*I#/;;-----:::::::::::::...$(END)"
	@echo "${PINK}		::::::::::::------------;;;;;;;!!/>)I>>)||I#     H&))>////*!;;-----:::::::::::::....$(END)"
	@echo "${PINK}		::::::::::::::::-------------;;;;;;!!!!//>|:    !:|//!!!;;;;-----::::::::::::::.....$(END)"
	@echo "${PINK}		::::::::::::::::::::-------------;;;;;;!!/>)|.*#|>/!!;;;;-------::::::::::::::......$(END)"
	@echo "${PINK}		::::::::::::::::::::::::-------------;;;;!!/>&*|I !;;;--------::::::::::::::........$(END)"
	@echo "${PINK}		:::::::::::::::::::::::::::-------------;;;!:H!!;;;--------:::::::::::::::..........$(END)"
	@echo "${PINK}		...:::::::::::::::::::::::::::::------------------------:::::::::::::::.............$(END)"
	@echo "${PINK}		.....::::::::::::::::::::::::::::::::::-----------:::::::::::::::::::...............$(END)"
	@echo "${PINK}		.........::::::::::::::::::::::::::::::::::::::::::::::::::::::::...................$(END)"
	@echo "${PINK}		.............::::::::::::::::::::::::::::::::::::::::::::::::.......................$(END)"