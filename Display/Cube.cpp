//
// Cube.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:14:34 2013 Helaine
// Last update Tue May 21 11:37:09 2013 Helaine
//

#include	"Cube.hpp"

namespace	Object
{
  void		Cube::initialize(void)
  {
  }

  void		Cube::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
  }

  void		Cube::draw(void)
  {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.50f, 0.75f);
    glVertex3f(-150.0f, 150.0f, 150.0f);
    glVertex3f(-150.0f, -150.0f, 150.0f);
    glVertex3f(150.0f, -150.0f, 150.0f);
    glVertex3f(150.0f, 150.0f, 150.0f);
    glVertex3f(-150.0f, 150.0f, -150.0f);
    glVertex3f(-150.0f, -150.0f, -150.0f);
    glVertex3f(-150.0f, -150.0f, 150.0f);
    glVertex3f(-150.0f, 150.0f, 150.0f);
    glVertex3f(150.0f, 150.0f, -150.0f);
    glVertex3f(150.0f, -150.0f, -150.0f);
    glVertex3f(-150.0f, -150.0f, -150.0f);
    glVertex3f(-150.0f, 150.0f, -150.0f);
    glVertex3f(150.0f, 150.0f, 150.0f);
    glVertex3f(150.0f, -150.0f, 150.0f);
    glVertex3f(150.0f, -150.0f, -150.0f);
    glVertex3f(150.0f, 150.0f, -150.0f);
    glEnd();
  }
}
