CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++17 -I../ex00

NAME = fragtrap
OBJ_DIR = bin

SRC = FragTrap.cpp main.cpp
EX00_SRC = ../ex00/ClapTrap.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
EX00_OBJ = $(OBJ_DIR)/ClapTrap.o

all: $(EX00_OBJ) $(NAME)

$(EX00_OBJ): $(EX00_SRC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(EX00_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(EX00_OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C ../ex00 fclean
	rm -f $(NAME)

re: fclean all
