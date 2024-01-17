#--- COLORS ---#

RESET = \\x1b[0m

F_BOLD = \\x1b[1m
F_UNDERLINE = \\x1b[4m
F_ITALIC = \\x1b[3m
F_STRIKE = \\x1b[9m

C_GREEN = \\x1b[32m
C_CYAN = \\x1b[36m
C_RED = \\x1b[31m
C_YELLOW = \\x1b[33m

#--- DEFAULT VALUES ---#

NAME = animal

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJS = $(patsubst %.cpp, bin/%.o, $(SRC))

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
#---   RULES   ---#

all: $(NAME) logo

$(NAME): $(OBJS) $(LIBFTPATH)$(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(F_BOLD)$(F_ITALIC)$(C_CYAN)$(NAME) COMPILED SUCCESSFULLY...$(RESET)
	
bin/%.o: %.cpp
	@mkdir -p bin/
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo $(F_BOLD)$(F_ITALIC)$(C_CYAN)$(NAME)\'S $@ OBJECT CREATED SUCCESSFULLY...$(RESET)

clean:
	@rm -rf bin/
	@echo $(F_BOLD)$(F_ITALIC)$(C_YELLOW)$(NAME) CLEANED SUCCESSFULLY...$(RESET)

fclean: clean
	@rm -rf $(NAME)
	@echo $(F_BOLD)$(F_ITALIC)$(C_RED)FULL CLEAN COMPLETED...$(RESET)

bonus: all

re: fclean all

logo:
	@echo "$(F_BOLD)$(C_CYAN)--- BUILD COMPLETE ---"
	@echo "███▄ ▄███▓ ███▄ ▄███▓ ▄▄▄       ██▀███   ▄████▄   ▒█████  ▄▄▄█████▓▄▄▄█████▓"
	@echo "▓██▒▀█▀ ██▒▓██▒▀█▀ ██▒▒████▄    ▓██ ▒ ██▒▒██▀ ▀█  ▒██▒  ██▒▓  ██▒ ▓▒▓  ██▒ ▓▒"
	@echo "▓██    ▓██░▓██    ▓██░▒██  ▀█▄  ▓██ ░▄█ ▒▒▓█    ▄ ▒██░  ██▒▒ ▓██░ ▒░▒ ▓██░ ▒░"
	@echo "▒██    ▒██ ▒██    ▒██ ░██▄▄▄▄██ ▒██▀▀█▄  ▒▓▓▄ ▄██▒▒██   ██░░ ▓██▓ ░ ░ ▓██▓ ░ "
	@echo "▒██▒   ░██▒▒██▒   ░██▒ ▓█   ▓██▒░██▓ ▒██▒▒ ▓███▀ ░░ ████▓▒░  ▒██▒ ░   ▒██▒ ░ "
	@echo "░ ▒░   ░  ░░ ▒░   ░  ░ ▒▒   ▓▒█░░ ▒▓ ░▒▓░░ ░▒ ▒  ░░ ▒░▒░▒░   ▒ ░░     ▒ ░░   "
	@echo "░  ░      ░░  ░      ░  ▒   ▒▒ ░  ░▒ ░ ▒░  ░  ▒     ░ ▒ ▒░     ░        ░    "
	@echo "░      ░   ░      ░     ░   ▒     ░░   ░ ░        ░ ░ ░ ▒    ░        ░      "
	@echo "       ░          ░         ░  ░   ░     ░ ░          ░ ░                    "
	@echo "                                         ░                                   $(RESET)"
