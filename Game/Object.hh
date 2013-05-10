//
// Object.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:37:19 2013 Guillaume
// Last update Fri May 10 15:24:07 2013 Guillaume
//

#ifndef			OBJECT_HH__
#define			OBJECT_HH__

#include		<iostream>
#include		<list>
#include		"Datagame.hh"

class			Object
{
private:
  Datagame::OBJ			_type;
  std::list<Datagame::OBJ>	*_fmap;
  int				_x;
  int				_y;

public:
  Object(Datagame::OBJ const &, std::list<Datagame::OBJ>, int = 0, int = 0);
  virtual ~Object();
  Datagame::OBJ			getType() const;
  int				getX() const;
  int				getY() const;
  void				setX(int);
  void				setY(int);
};

#endif
