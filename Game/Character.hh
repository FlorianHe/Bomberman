//
// Character.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 15:40:09 2013 Guillaume
// Last update Fri May 10 16:02:15 2013 Guillaume
//

#ifndef			CHARACTER_HH__
#define			CHARACTER_HH__

#include		<list>
#include		<iostream>
#include		"Datagame.hh"
#include		"Object.hh"

class			Character : public Object
{
private:
  int			_speed;
  int			_range;
  int			_nbbombmax;
  int			_nbbomb;

public:
  Character(Datagame::OBJ const &, std::list<Datagame::OBJ>, int = 1, int = 1, int = 1, int = 0, int = 0);
  virtual ~Character();
  int			getSpeed() const;
  int			getRange() const;
  int			getNbBombMax() const;
  int			getNbBomb() const;
  void			setSpeed(int);
  void			setRange(int);
  void			setNbBombMax(int);
  void			setNbBomb(int);
};

#endif
