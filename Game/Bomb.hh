//
// Bomb.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 10:02:36 2013 Guillaume
// Last update Tue May  7 10:07:35 2013 Guillaume
//

#ifndef			BOMB_HH__
#define			BOMB_HH__

class			Bomb
{
private:
  int			_range;
  int			_x;
  int			_y;
  int			_time;

public:
  Bomb(int, int, int);
  ~Bomb();
};

#endif
