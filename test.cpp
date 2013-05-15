//
// test.cpp for coucou in /home/helain_f/Semestre_3/cpp/Bomberman
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 14:40:28 2013 Helaine
// Last update Wed May 15 14:51:00 2013 Helaine
//

#include		"test.hpp"

Test::Test()
  : gdl::Game()
{}

Test::~Test()
{}

void		Test::initialize()
{
  this->window_.create();

  //this->camera_.initialize();
}

void		Test::draw()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(0.74f, 0.84f, 95.0f, 1.0f);
  glClearDepth(1.0f);
  this->window_.display();
}

void		Test::unload()
{}
void		Test::update()
{}
