//
// Cube.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:14:34 2013 Helaine
// Last update Fri May 24 13:53:24 2013 Helaine
//

#include	"Cube.hpp"

namespace	Object
{
  Cube::Cube(float x, float y, float z, float rx, float ry, float rz, Datagame::OBJ what)
    : AObject(x, y, z, rx, ry, rz), what_(what)
  {
  }

  void		Cube::initialize(void)
  {
  }

  void		Cube::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
  }

  void		Cube::draw(void)
  {
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(this->position_.x, this->position_.y, this->position_.z);
    glBegin(GL_QUADS);
    if (what_ == Datagame::PLEIN)
      glColor3f(0.0f, 0.0f, 1.0f);
    else if (what_ == Datagame::VIDE)
      glColor3f(0.0f, 1.0f, 0.0f);
    else if (what_ == Datagame::CASSABLE)
      glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-50.0f, 50.0f, 50.0f);
    glVertex3f(-50.0f, -50.0f, 50.0f);
    glVertex3f(50.0f, -50.0f, 50.0f);
    glVertex3f(50.0f, 50.0f, 50.0f);
    glVertex3f(-50.0f, 50.0f, -50.0f);
    glVertex3f(-50.0f, -50.0f, -50.0f);
    glVertex3f(-50.0f, -50.0f, 50.0f);
    glVertex3f(-50.0f, 50.0f, 50.0f);
    glVertex3f(50.0f, 50.0f, -50.0f);
    glVertex3f(50.0f, -50.0f, -50.0f);
    glVertex3f(-50.0f, -50.0f, -50.0f);
    glVertex3f(-50.0f, 50.0f, -50.0f);
    glVertex3f(50.0f, 50.0f, 50.0f);
    glVertex3f(50.0f, -50.0f, 50.0f);
    glVertex3f(50.0f, -50.0f, -50.0f);
    glVertex3f(50.0f, 50.0f, -50.0f);
    glEnd();
    glPopMatrix();
  }
}
