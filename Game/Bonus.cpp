//
// Bonus.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 16:26:38 2013 Guillaume
// Last update Fri May 10 16:28:57 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Bonus.hh"

Bonus::Bonus(Datagame::OBJ const & type, std::list<Datagame::OBJ> map, int bonus, int x, int y) :
  Object(type, map, x, y)
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
