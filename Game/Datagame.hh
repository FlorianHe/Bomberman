//
// Datagame.hh for Bomberman in /home/maku/Projets/Bomberman
//
// Made by Guillaume
// Login   <maku@epitech.net>
//
// Started on  Fri May 10 14:24:32 2013 Guillaume
// Last update Thu May 23 17:13:25 2013 Helaine
//

#ifndef			DATAGAME_HH__
#define			DATAGAME_HH__

#include		<iostream>
#include		<list>
#include		<vector>

//class			Object;
//class			Parseur;
class			Datagame
{
public:
  enum			OBJ
    {
      VIDE,
      PLEIN,
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

protected:
  std::vector<OBJ>		_map;
  //std::list<Object *>		_obj;

public:
  Datagame(std::vector<OBJ> const &);
  //Datagame(std::vector<OBJ> const &, std::list<Object *>);
  ~Datagame();
};

#endif
