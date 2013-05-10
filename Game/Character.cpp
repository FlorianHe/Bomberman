//
// Character.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 15:48:02 2013 Guillaume
// Last update Fri May 10 16:03:17 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Character.hh"

Character::Character(Datagame::OBJ const & type, std::list<Datagame::OBJ> map, int speed, int range, int nbbomb, int x, int y) :
  Object(type, map, x, y)
{
  this->_speed = speed;
  this->_range = range;
  this->_nbbombmax = nbbomb;
  this->_nbbomb = nbbomb;
}

Character::~Character()
{

}

int			Character::getSpeed() const
{
  return (this->_speed);
}

int			Character::getRange() const
{
  return (this->_range);
}

int			Character::getNbBombMax() const
{
  return (this->_nbbombmax);
}

int			Character::getNbBomb() const
{
  return (this->_nbbomb);
}

void			Character::setSpeed(int add)
{
  this->_speed += add;
}

void			Character::setRange(int add)
{
  this->_range += add;
}

void			Character::setNbBombMax(int add)
{
  this->_nbbombmax += add;
}

void			Character::setNbBomb(int add)
{
  this->_nbbomb += add;
}
