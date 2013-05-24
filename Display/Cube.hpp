//
// Cube.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:12:12 2013 Helaine
// Last update Fri May 24 11:20:19 2013 Helaine
//

#ifndef		CUBE_H_
#define		CUBE_H_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"../libgdl_gl-2012.4/include/Game.hpp"
#include	"AObject.hpp"
#include	"../Game/Datagame.hh"

namespace	Object
{
  class Cube : public AObject
  {
    Datagame::OBJ	what_;
  public:
    Cube(float x = 0, float y = 0, float z = 0, float rx = 0, float ry = 0, float rz = 0, Datagame::OBJ what = Datagame::VIDE);
    void initialize(void);
    void update(gdl::GameClock const &, gdl::Input &);
    void draw(void);
  };
}

#endif
