//
// test.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May  7 15:53:14 2013 Helaine
// Last update Tue May 21 11:49:40 2013 Helaine
//

#ifndef		TEST_H_
#define		TEST_H_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"libgdl_gl-2012.4/include/Game.hpp"
#include	"Display/Camera.hpp"
#include	"Display/Primitive.hpp"
#include	"Display/Cube.hpp"
#include	"Display/Model.hpp"
#include	"Display/Pyramid.hpp"

class		Test : public gdl::Game
{
public:
  Test();
  virtual ~Test();
public:
  void		draw();
  void		initialize();
  void		unload();
  void		update();
private:
  Camera	camera_;
  std::list<AObject*> objects_;
};	

#endif
