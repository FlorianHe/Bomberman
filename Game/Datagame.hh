//
// Datagame.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 10:22:37 2013 Guillaume
// Last update Tue May  7 10:42:02 2013 Guillaume
//

#ifndef				DATAGAME_HH__
#define				DATAGAME_HH__

#include			<map>
#include			<list>
#include			"Bomberman.hh"
#include			"Bomb.hh"

class				Datagame
{
private:
  std::map<int>			_map;
  std::list<Bomberman *>	_lplayer;
  std::list<Bomb *>		_lbomb;

public:
  Datagame(std::map<int> const &);
  ~Datagame();
  std::map<int>			getMap() const;
};

#endif
