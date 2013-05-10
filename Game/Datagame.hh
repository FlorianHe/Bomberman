//
// Datagame.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:24:32 2013 Guillaume
// Last update Fri May 10 15:19:58 2013 Guillaume
//

#ifndef			DATAGAME_HH__
#define			DATAGAME_HH__

#include		<iostream>
#include		<list>

class			Datagame
{
public:
  enum			OBJ
    {
      VIDE,
      CASSABLE,
      BOMB,
      EXPLOSION,
      SPEED,
      RANGE,
      NBBOMB,
      P1,
      P2,
      IA
    };

private:
  std::list<OBJ>		_map;

public:
  Datagame(std::list<OBJ> const &);
  ~Datagame();
};

#endif
