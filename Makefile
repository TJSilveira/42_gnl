NAME = libgnl.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

# Directories
SRC_DIR = ./src/
SRC_DIR_BONUS = ./src_bonus/
OBJS_DIR = ./objs/

# Source File names
SRC_FILES = get_next_line.c \
			get_next_line_utils.c

BONUS_FILES = get_next_line_bonus.c \
			get_next_line_utils_bonus.c

# Source File paths
SRC_TEST = $(addprefix $(SRC_DIR),test.c)
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))
SRC_BONUS = $(addprefix $(SRC_DIR_BONUS),$(BONUS_FILES))

INCLUDES = -I ./includes/ -D BUFFER_SIZE=200 -D NORMAL

#Object files
OBJS_FILES = $(SRC_FILES:.c=.o)
OBJS_FILES_BONUS = $(BONUS_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR),$(OBJS_FILES))
OBJS_BONUS = $(addprefix $(OBJS_DIR),$(OBJS_FILES_BONUS))
OBJS_TEST = $(OBJS_DIR)test.o

all: ${NAME}

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

${NAME}: $(OBJS_DIR) $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib	$(NAME)

bonus: $(OBJS_DIR) $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS_BONUS)
	ranlib	$(NAME)

test: $(OBJS_DIR) ${OBJS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS} ${OBJS_TEST} -o test

test_bonus: $(OBJS_DIR) ${OBJS_BONUS} ${OBJS_TEST}
	${CC} ${CFLAGS} ${OBJS_BONUS} ${OBJS_TEST} -o test

# Creating object files for normal run
$(OBJS_DIR)%.o: $(SRC_DIR)%.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

# Creating object files for bonus run
$(OBJS_DIR)%.o: $(SRC_DIR_BONUS)%.c
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

$(OBJS_TEST): $(SRC_TEST)
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

valgrind: test
	G_SLICE=always-malloc G_DEBUG=gc-friendly  valgrind -v --tool=memcheck --leak-check=full --num-callers=40 --log-file=valgrind.log ./test

clean:
	rm -rf ${OBJS_DIR}

fclean: clean
	rm -f ${NAME} test

re: fclean ${NAME}

retest: fclean test 

.PHONY: all clean fclean re