//
// test.cpp for coucou in /home/helain_f/Semestre_3/cpp/Bomberman
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 14:40:28 2013 Helaine
// Last update Tue May 21 16:36:03 2013 Helaine
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
  this->camera_.initialize();
  this->objects_.push_back(new Model::Bomberman());
  std::list<AObject*>::iterator itb = this->objects_.begin();
  for (; itb != this->objects_.end(); ++itb)
    (*itb)->initialize();
}

void		Test::draw()
{

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(0.74f, 0.84f, 95.0f, 1.0f);
  glClearDepth(1.0f);
  std::list<AObject*>::iterator itb = this->objects_.begin();
  for (; itb != this->objects_.end(); ++itb)
    (*itb)->draw();  
}

void		Test::unload()
{}

void		Test::update()
{
  std::list<AObject*>::iterator itb = this->objects_.begin();

  for (; itb != this->objects_.end(); ++itb)
    (*itb)->update(gameClock_, input_);
  camera_.update(gameClock_, input_);
}
