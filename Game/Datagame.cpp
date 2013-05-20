//
// Datagame.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:29:14 2013 Guillaume
// Last update Tue May 14 15:36:41 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<list>
#include		"Datagame.hh"

Datagame::Datagame(std::list<OBJ> const & map, std::list<Object *> obj) :
  _map(map),
  _obj(obj)
{
}

Datagame::~Datagame()
{
}
