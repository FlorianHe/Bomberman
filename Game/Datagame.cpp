//
// Datagame.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:29:14 2013 Guillaume
// Last update Mon May 20 16:35:34 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		<vector>
#include		"Datagame.hh"

Datagame::Datagame(std::vector<OBJ> const & map, std::list<Object *> obj) :
  _map(map),
  _obj(obj)
{
}

Datagame::~Datagame()
{
}
