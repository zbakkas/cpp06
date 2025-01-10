CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Base.cpp

OBJ=$(FILES:.cpp=.o)

NAME= Base

all: $(NAME)


$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	
%.o:%.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CPP) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all