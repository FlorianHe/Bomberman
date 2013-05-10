//
// Object.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:47:07 2013 Guillaume
// Last update Fri May 10 15:24:39 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"

Object::Object(Datagame::OBJ const & type, std::list<Datagame::OBJ> map, int x, int y) :
  _type(type),
  _fmap(&map),
  _x(x),
  _y(y)
{
}

Object::~Object()
{
}

Datagame::OBJ		Object::getType() const
{
  return (this->_type);
}

int			Object::getX() const
{
  return (this->_x);
}

int			Object::getY() const
{
  return (this->_y);
}

void			Object::setX(int x)
{
  this->_x = x;
}

void			Object::setY(int y)
{
  this->_y = y;
}
