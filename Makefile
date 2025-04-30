NAME = libgnl.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = ./src/
OBJS_DIR = ./objs/

#BUILD_DIR = ./build/

SRC_FILES = get_next_line.c \
			get_next_line_bonus.c \
			get_next_line_utils.c \
			get_next_line_utils_bonus.c

SRC_TEST = $(addprefix $(SRC_DIR),test.c)
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))

INCLUDES = -I ./includes/

#Object files
OBJS_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR),$(OBJS_FILES))
OBJS_TEST = $(OBJS_DIR)test.o

all: ${NAME}

bonus: all

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

${NAME}: $(OBJS_DIR) $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib	$(NAME)

test: $(OBJS_DIR) ${OBJS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS} ${OBJS_TEST} -o test

$(OBJS_DIR)%.o: $(SRC_DIR)%.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

clean:
	rm -rf ${OBJS_DIR}

fclean: clean
	rm -f ${NAME} test

re: fclean ${NAME}

retest: fclean test 

.PHONY: all clean fclean re