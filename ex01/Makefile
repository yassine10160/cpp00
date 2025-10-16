NAME= phoneBook
CC=c++
FLAGS=-Wall -Wextra -Werror
OBJDIR = .obj
SRCS=PhoneBook.cpp Contact.cpp main.cpp
HEADERS=
OBJS=$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
all: $(NAME)
$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
$(OBJDIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(OPTS) -c $< -o $@
clean:
	rm -rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re