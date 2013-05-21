//
// Cube.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:14:34 2013 Helaine
// Last update Tue May 21 11:41:17 2013 Helaine
//

#include	"Pyramid.hpp"

namespace	Object
{
  void Pyramide::initialize(void)
  {
  }

  void Pyramide::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
    this->rotation_.y = ((int)rotation_.y + 1) % 360;
  }

  void Pyramide::draw(void)
  {
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, -900.0f);
    glRotatef(this->rotation_.y, 0.0f, 1.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.0f, -150.0f, -150.0f);
    glVertex3f(-150.0f, -150.0f, 150.0f);
    glVertex3f(150.0f, -150.0f, 150.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 150.0f, 0.0f);
    glVertex3f(-150.0f, -150.0f, 150.0f);
    glVertex3f(150.0f, -150.0f, 150.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 150.0f, 0.0f);
    glVertex3f(0.0f, -150.0f, -150.0f);
    glVertex3f(-150.0f, -150.0f, 150.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 150.0f, 0.0f);
    glVertex3f(150.0f, -150.0f, 150.0f);
    glVertex3f(0.0f, -150.0f, -150.0f);
    glEnd();
    glPopMatrix();
  }
}
