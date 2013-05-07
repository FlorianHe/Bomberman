//
// Bomberman.hh for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 09:32:08 2013 Guillaume
// Last update Tue May  7 10:01:56 2013 Guillaume
//

#ifndef			BOMBERMAN_HH__
#define			BOMBERMAN_HH__

class			Bomberman
{
private:
  int			_numplayer;
  int			_x;
  int			_y;
  int			_nblive;
  int			_range;
  int			_speed;
  int			_nbbomb;

public:
  Bomberman(int);
  ~Bomberman();
  int			getNumPlayer() const;
  int			getX() const;
  int			getY() const;
  int			getNbLive() const;
  int			getRange() const;
  int			getSpeed() const;
  int			getNbBomb() const;
  void			setX(int);
  void			setY(int);
  void			setNbLive(int);
  void			setRange(int);
  void			setSpeed(int);
  void			setNbBomb(int);
};

#endif
