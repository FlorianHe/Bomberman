//
// Datagame.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 10:22:26 2013 Guillaume
// Last update Tue May  7 10:41:57 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<map>
#include		<list>
#include		"Datagame.hh"
#include		"Bomberman.hh"
#include		"Bomb.hh"

Datagame::Datagame(std::map<int> const & map) :
  _map(map),
  _lplayer(NULL),
  _lbomb(NULL)
{
  
}

Datagame::~Datagame()
{

}

std::map<int>		Datagame::getMap() const
{
  return (this->_map);
}
