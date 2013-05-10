//
// Bonus.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 16:13:14 2013 Guillaume
// Last update Fri May 10 16:26:17 2013 Guillaume
//

#ifndef			BONUS_HH__
#define			BONUS_HH__

#include		<iostream>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"

class			Bonus : public Object
{
private:
  int			_bonus;

public:
  Bonus(Datagame::OBJ const &, std::list<Datagame::OBJ>, int = 1, int = 0, int = 0);
  virtual ~Bonus();
  int			getBonus() const;
};

#endif
