//
// Bomb.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 15:09:05 2013 Guillaume
// Last update Mon May 20 16:49:42 2013 Guillaume
//

#ifndef			BOMB_HH__
#define			BOMB_HH__

#include		<iostream>
#include		<list>
#include		<vector>
#include		"Datagame.hh"
#include		"Object.hh"

class			Bomb : public Object
{
private:
  int			_range;
  int			_time;

public:
  Bomb(std::vector<Datagame::OBJ> *, std::list<Object *> *, int, int, int);
  virtual ~Bomb();
  int			getRange() const;
  int			getTime() const;
  void			setTime(int);
  void			explosion();
  void			expltop(int);
  void			explbot(int);
  void			explleft(int);
  void			explright(int);
};

#endif
