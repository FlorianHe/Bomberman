##
## Makefile for bbman in /home/helain_f/Semestre_3/cpp/Bomberman
## 
## Made by Helaine
## Login   <helain_f@epitech.net>
## 
## Started on  Tue May  7 11:57:25 2013 Helaine
## Last update Tue May 14 11:44:24 2013 buisso_n
##

NAME=		bomberman

SRC=		main.cpp \
		test.cpp

OBJ=		$(SRC:.c=.o)

all:		$(OBJ)
		g++ -o $(NAME)  $(OBJ) -I./libgdl_gl-2012.4/include -L./libgdl_gl-2012.4/lib -Wl,--rpath=./libgdl_gl-2012.4/lib -lgdl_gl -lGL -lGLU

clean:		
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all