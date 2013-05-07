//
// Bomberman.cpp for BBomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 09:31:48 2013 Guillaume
// Last update Tue May  7 10:01:58 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		"Bomberman.hh"

Bomberman::Bomberman(int numplayer, int range, int speed, int nbbomb) : 
  _numplayer(numplayer),
  _nblive(2),
  _range(range),
  _speed(speed),
  _nbbomb(nbbomb)
{
  //a changer avec une fonction aleatoire
  this->_x = 1;
  this->_y = 1;
  //************************

  std::cout << "Joueur " << this->_numplayer << " créé !" << std::endl;
}

Bomberman::~Bomberman()
{
  std::cout << "Joueur " << this->_numplayer << " a perdu !" << std::endl;
}

int			Bomberman::getNumPlayer() const
{
  return (this->_numplayer);
}

int			Bomberman::getX() const
{
  return (this->_x);
}

int			Bomberman::getY() const
{
  return (this->_y);
}

int			Bomberman::getNbLive() const
{
  return (this->_nblive);
}

int			Bomberman::getRange() const
{
  return (this->_range);
}

int			Bomberman::getSpeed() const
{
  return (this->_speed);
}

int			Bomberman::getNbBomb() const
{
  return (this->_nbbomb);
}

void			Bomberman::setX(int x)
{
  this->_x = x;
}

void			Bomberman::setY(int y)
{
  this->_y = y;
}

void			Bomberman::setNbLive(int add)
{
  this->_nblive += add;
}

void			Bomberman::setRange(int add)
{
  this->_range += add;
}

void			Bomberman::setSpeed(int add)
{
  this->_range += add;
}

void			Bomberman::setNbBomb(int add)
{
  this->_nbbomb += add;
}

