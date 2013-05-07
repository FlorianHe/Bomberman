##
## Makefile for bbman in /home/helain_f/Semestre_3/cpp/Bomberman
## 
## Made by Helaine
## Login   <helain_f@epitech.net>
## 
## Started on  Tue May  7 11:57:25 2013 Helaine
## Last update Tue May  7 14:24:09 2013 Helaine
##

NAME=		bomberman

SRC=		main.cpp

OBJ=		$(SRC:.c=.o)

all:		$(OBJ)
		g++ -o $(NAME) -Ilibgdl_gl-2012.4/include -Llibgdl_gl-2012.4/lib -Wl,--rpath=libgdl_gl-2012.4/lib -lgdl_gl -lGL -lGLU $(OBJ)
