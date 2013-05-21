//
// Camera.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 15:07:41 2013 Helaine
// Last update Tue May 21 11:50:47 2013 Helaine
//

#ifndef		CAMERA_HPP_
#define		CAMERA_HPP_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"../libgdl_gl-2012.4/include/GameClock.hpp"
#include	"../libgdl_gl-2012.4/include/Input.hpp"
#include	"Vector3f.hpp"

class		Camera
{
public:
  Camera(void);

  void		initialize(void);
  void		update(gdl::GameClock const &, gdl::Input &);
private:
  Vector3f	position_;
  Vector3f	rotation_;
};

#endif
