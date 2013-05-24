//
// test.cpp for coucou in /home/helain_f/Semestre_3/cpp/Bomberman
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 14:40:28 2013 Helaine
// Last update Fri May 24 13:14:05 2013 Helaine
//

#include		"Game/Datagame.hh"
#include		"test.hpp"

std::vector<Datagame::OBJ>				Open_map(/*int ac, char *av[]*/);

Test::Test()
  : gdl::Game()
{}

Test::~Test()
{}

void		Test::initialize()
{
  std::vector<Datagame::OBJ>	map;
  float		x = 600.0f;
  float		y = -300.0f;
  float		z = 900.0f;
  int		i = 0;

  map = Open_map();
  this->window_.create();
  this->camera_.initialize();
  std::vector<Datagame::OBJ>::iterator it = map.begin();
  while (it != map.end())
    {
      if ((*it) == Datagame::VIDE)
	this->objects_.push_back(new Object::Cube(x, y - 100.0f, z, 0, 0, 0, Datagame::VIDE));
      else if ((*it) == Datagame::PLEIN)
	this->objects_.push_back(new Object::Cube(x, y, z, 0, 0, 0, Datagame::PLEIN));
      //this->objects_.push_back(new Object::Cube(-400, -400, -400, 0, 0, 0, Datagame::CASSABLE));
      //this->objects_.push_back(new Object::Cube(-400, -400, -300, 0, 0, 0, Datagame::VIDE));
      else if ((*it) == Datagame::CASSABLE)
	this->objects_.push_back(new Object::Cube(x, y, z, 0, 0, 0, Datagame::CASSABLE));
      it++;
      i++;
      if (i == 15)
	{
	  //std::cout << "x += 100" << std::endl;
	  z -= 101.0f;
	  x = 601.0f;
	  i = 0;
	}
      x -= 101.0f;
    }
  std::cout << map.size() << std::endl;
  //this->objects_.push_back(new Model::Bomberman());
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
