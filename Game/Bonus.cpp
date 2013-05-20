//
// Bonus.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 16:26:38 2013 Guillaume
// Last update Thu May 16 15:24:07 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Bonus.hh"

Bonus::Bonus(Datagame::OBJ const & type, std::list<Datagame::OBJ> *map, std::list<Object *> *obj, int bonus, int x, int y) :
  Object(type, map, obj, x, y)
{
  this->_bonus = bonus;
}

Bonus::~Bonus()
{
}

int			Bonus::getBonus() const
{
  return (this->_bonus);
}
