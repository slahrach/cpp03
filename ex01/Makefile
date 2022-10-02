NAME = ScavTrap

STDFLAGS = -std=c++98

FLAGS = -Wall -Wextra -Werror

all :
	clang++ main.cpp ClapTrap.cpp ScavTrap.cpp ${FLAGS} ${STDFLAGS} -o ${NAME}

clean :
	rm -rf ${NAME}

fclean : clean

re : clean all