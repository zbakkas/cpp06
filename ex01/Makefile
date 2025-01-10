CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Serializer.cpp

OBJ=$(FILES:.cpp=.o)

NAME= Serializer

all: $(NAME)


$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	
%.o:%.cpp Serializer.hpp
	$(CPP) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all