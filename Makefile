##
## Makefile for bbman in /home/helain_f/Semestre_3/cpp/Bomberman
## 
## Made by Helaine
## Login   <helain_f@epitech.net>
## 
## Started on  Tue May  7 11:57:25 2013 Helaine
## Last update Thu May 23 13:59:00 2013 Helaine
##

NAME=		bomberman

SRC=		main.cpp \
		test.cpp \
		Display/Camera.cpp \
		Display/Vector3f.cpp \
		Display/Triangle.cpp \
		Display/Rectangle.cpp \
		Display/Cube.cpp \
		Display/Pyramid.cpp \
		Display/Model.cpp \
		Game/main.cpp

OBJ=		$(SRC:.cpp=.o)

all:		$(OBJ)
		g++ -o $(NAME)  $(OBJ) -I./libgdl_gl-2012.4/include -L./libgdl_gl-2012.4/lib -Wl,--rpath=./libgdl_gl-2012.4/lib -lgdl_gl -lGL -lGLU

clean:		
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all