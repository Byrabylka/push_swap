
NAME1    = push_swap
NAME2	 = checker
CC      = gcc -Ofast
CFLAGS  = -Wall -Wextra -Werror
PINK = \033[1;35m
HEADER      = ./incs/push_swap.h
OBJ_PATH	= ./objs_p
OBJ_PATH2	= ./objs_c
SRC_PATH    = ./srcs

SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES1))

SOURCES1 = ft_split.c get_info.c list_utils.c main.c operations1.c operations2.c operations3.c parsing.c solve_5_from_start.c solve_4_or_less.c solve_4_or_less_b.c solve.c start.c utils.c utils2.c utils3.c utils4.c final.c

SOURCES2 = ft_split.c get_info.c list_utils.c checker.c operations1.c operations2.c operations3.c parsing.c solve_5_from_start.c solve_4_or_less.c solve_4_or_less_b.c solve.c start.c utils.c utils2.c utils3.c utils4.c final.c

OBJS1 = $(addprefix $(OBJ_PATH)/,$(SOURCES1:.c=.o))
OBJS2 = $(addprefix $(OBJ_PATH2)/,$(SOURCES2:.c=.o))
            
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER) Makefile
			@mkdir -p objs_p
			@${CC} ${CFLAGS} -c $< -o $@

$(OBJ_PATH2)/%.o: $(SRC_PATH)/%.c $(HEADER) Makefile
			@mkdir -p objs_c
			@${CC} ${CFLAGS} -c $< -o $@

all: 		${NAME1} ${NAME2}

#checker:	${NAME2}

${NAME1}:	${OBJS1}
			@${CC} ${CFLAGS} ${OBJS1} -o ${NAME1}

${NAME2}:	${OBJS2}
			@${CC} ${CFLAGS} ${OBJS2} -o ${NAME2}

clean:
		@rm -f ${OBJS1} ${OBJS2}
		@rm -rf objs_c objs_p

fclean: clean
		@rm -f ${NAME1} ${NAME2}

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