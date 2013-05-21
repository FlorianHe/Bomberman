//
// Camera.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 15:09:07 2013 Helaine
// Last update Wed May 15 15:21:24 2013 Helaine
//

#include	"Camera.hpp"

Camera::Camera(void)
  : position_(0.0f, 0.0f, 900.0f), rotation_(0.0f, 0.0f, 0.0f)
{
}

void		Camera::initialize(void)
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(70.0f, 800.0f / 600.0f, 1.0f, 10000.0f);
  gluLookAt(position_.x, position_.y, position_.z, 0.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LEQUAL);
}

void		Camera::update(gdl::GameClock const & gameClock, gdl::Input & input)
{
}
