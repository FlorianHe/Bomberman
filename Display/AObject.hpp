//
// AObject.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:03:45 2013 Helaine
// Last update Wed May 22 16:31:14 2013 Helaine
//

#ifndef		AOBJECT_H_
#define		AOBJECT_H_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"../libgdl_gl-2012.4/include/Game.hpp"
#include	"Vector3f.hpp"

class		AObject
{
public:
  AObject()
  : position_(0.0f, 0.0f, 0.0f), rotation_(0.0f, 0.0f, 0.0f)
  {
  }
  AObject(float x, float y, float z, float rx, float ry, float rz)
  : position_(x, y, z), rotation_(rx, ry, rz)
  {
  }
  virtual void initialize(void) = 0;
  virtual void update(gdl::GameClock const &, gdl::Input &) = 0;
  virtual void draw(void) = 0;
protected:
  Vector3f position_;
  Vector3f rotation_;
};

#endif
