//
// Bomb.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 15:14:44 2013 Guillaume
// Last update Mon May 20 14:30:45 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Bomb.hh"

Bomb::Bomb(std::list<Datagame::OBJ> *map, std::list<Object *> *obj, int range, int x, int y) :
  Object(Datagame::BOMB, map, obj, x, y)
{
  this->_range = range;
}

Bomb::~Bomb()
{

}

int			Bomb::getRange() const
{
  return (this->_range);
}

int			Bomb::getTime() const
{
  return (this->_time);
}

void			Bomb::setTime(int time)
{
  this->_time = time;
}

void			Bomb::explosion()
{
  int			x;
  int			y;

  x = 0;
  y = 0;
  //besoin de la map
 
}
