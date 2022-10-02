NAME = ClapTrap

STDFLAGS = -std=c++98

FLAGS = -Wall -Wextra -Werror

all :
	clang++ main.cpp ClapTrap.cpp ${FLAGS} ${STDFLAGS} -o ${NAME}

clean :
	rm -rf ${NAME}

fclean : clean

re : clean all