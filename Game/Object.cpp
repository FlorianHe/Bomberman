//
// Object.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:47:07 2013 Guillaume
// Last update Mon May 20 17:28:10 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		<vector>
#include		"Datagame.hh"
#include		"Object.hh"

Object::Object(Datagame::OBJ const & type, std::vector<Datagame::OBJ> *map, std::list<Object *> *obj, int x, int y) :
  _type(type),
  _fmap(map),
  _obj(obj),
  _x(x),
  _y(y)
{
  int				check;

  this->_obj->push_back(this);
  check = 0;
  for(std::vector<Datagame::OBJ>::iterator it=this->_fmap->begin(); it!=this->_fmap->end(); it++)
    {
      if (check == ((y * 15) + x))
	{
	  (*it) = type;
	  break;
	}
	check++;
    }
}

Object::~Object()
{
}

Datagame::OBJ			Object::getType() const
{
  return (this->_type);
}

int				Object::getX() const
{
  return (this->_x);
}

int				Object::getY() const
{
  return (this->_y);
}

std::vector<Datagame::OBJ>*	Object::getFmap() const
{
  return (this->_fmap);
}

std::list<Object *>*		Object::getObj() const
{
  return (this->_obj);
}

void				Object::setX(int x)
{
  this->_x = x;
}

void				Object::setY(int y)
{
  this->_y = y;
}

void				Object::deleteObj()
{
  for(std::list<Object *>::iterator it=this->_obj->begin(); it != this->_obj->end(); it++)
    {
      if (((*it)->getX() == this->getX()) && ((*it)->getY() == this->getY()) 
	  && ((*it)->getType() == this->getType()))
	{
	  _obj->erase(it);
	  it--;
	  break;
	}
    }
}
