//
// Rectangle.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 10:37:52 2013 Helaine
// Last update Tue May 21 14:11:36 2013 Helaine
//

#include	"Primitive.hpp"

namespace	Primitive
{
  void		Rectangle::initialize(void)
  {

  }

  void		Rectangle::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
  }

  void		Rectangle::draw(void)
  {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.50f, 0.75f);
    glVertex3f(-150.0f, 100.0f, 0.0f);
    glVertex3f(-150.0f, -100.0f, 0.0f);
    glVertex3f(150.0f, -100.0f, 0.0f);
    glVertex3f(150.0f, 100.0f, 0.0f);
    glEnd();
  }
}
