//
// Object.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:37:19 2013 Guillaume
// Last update Mon May 20 13:08:00 2013 Guillaume
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
  std::list<Object *>		*_obj;
  int				_x;
  int				_y;

public:
  Object(Datagame::OBJ const &, std::list<Datagame::OBJ> *, std::list<Object *> *, int = 0, int = 0);
  virtual ~Object();
  Datagame::OBJ			getType() const;
  int				getX() const;
  int				getY() const;
  std::list<Datagame::OBJ>*	getFmap() const;
  std::list<Object *>*		getObj() const;
  void				setX(int);
  void				setY(int);
  void				deleteObj();
};

#endif
