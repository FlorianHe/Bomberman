//
// Cube.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:12:12 2013 Helaine
// Last update Tue May 21 11:13:58 2013 Helaine
//

#ifndef		PYRAMID_H_
#define		PYRAMID_H_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"../libgdl_gl-2012.4/include/Game.hpp"
#include	"AObject.hpp"

namespace Object
{
  class Pyramide : public AObject
  {
    void initialize(void);
    void update(gdl::GameClock const &, gdl::Input &);
    void draw(void);
  };
}

#endif
