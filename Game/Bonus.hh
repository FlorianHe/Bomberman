//
// Bonus.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 16:13:14 2013 Guillaume
// Last update Mon May 20 16:07:50 2013 Guillaume
//

#ifndef			BONUS_HH__
#define			BONUS_HH__

#include		<iostream>
#include		<list>
#include		<vector>
#include		"Datagame.hh"
#include		"Object.hh"

class			Bonus : public Object
{
private:
  int			_bonus;

public:
  Bonus(Datagame::OBJ const &, std::vector<Datagame::OBJ> *, std::list<Object *> *, int = 1, int = 0, int = 0);
  virtual ~Bonus();
  int			getBonus() const;
};

#endif
