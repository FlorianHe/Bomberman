//
// Bomb.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 15:14:44 2013 Guillaume
// Last update Mon May 20 17:36:17 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<vector>
#include		<list>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Bomb.hh"

Bomb::Bomb(std::vector<Datagame::OBJ> *map, std::list<Object *> *obj, int range, int x, int y) :
  Object(Datagame::BOMB, map, obj, x, y)
{
  this->_range = range;
}

Bomb::~Bomb()
{

}

int			Bomb::getRange() const
{
  return (this->_range);
}

int			Bomb::getTime() const
{
  return (this->_time);
}

void			Bomb::setTime(int time)
{
  this->_time = time;
}

void			Bomb::explosion()
{
  int			x;
  int			y;
  int			check;
  int			tmp;

  check = 0;
  for(std::vector<Datagame::OBJ>::iterator it=(this->getFmap())->begin(); it!=(this->getFmap())->end(); it++)
    {
      if (check == ((this->getY() * 15) + this->getX()))
	{
	  (*it) = Datagame::EXPLOSION;
	  expltop(check);
	  explbot(check);
	  explright(check);
	  explleft(check);
	}
      check++;
    }
  this->deleteObj();
}

void			Bomb::expltop(int posi)
{
  int			tmp;
  int			check;
  int			tmpx;
  int			tmpy;

  tmp = 1;
  check = posi - 15;

  while (tmp <= this->getRange())
    {
      tmpy = check / 15;
      tmpx = check - (tmpy * 15);
      if ((*this->getFmap())[check] == Datagame::PLEIN ||
	  (*this->getFmap())[check] == Datagame::CASSABLE)
	{
	  if ((*this->getFmap())[check] == Datagame::CASSABLE)
	    {
	      for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
		{
		  if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		    {
		      (*it)->deleteObj();
		      it--;
		    }
		}
	      (*this->getFmap())[check]=Datagame::EXPLOSION;
	    }
	  break;
	}
      else
	{
	  for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
	    {
	      if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		{
		  (*it)->deleteObj();
		  it--;
		}
	    }
	  (*this->getFmap())[check]=Datagame::EXPLOSION;
	}
      tmp++;
      check -= 15;
    }
}

void			Bomb::explbot(int posi)
{
  int			tmp;
  int			check;
  int			tmpx;
  int			tmpy;

  tmp = 1;
  check = posi + 15;

  while (tmp <= this->getRange())
    {
      tmpy = check / 15;
      tmpx = check - (tmpy * 15);
      if ((*this->getFmap())[check] == Datagame::PLEIN ||
	  (*this->getFmap())[check] == Datagame::CASSABLE)
	{
	  if ((*this->getFmap())[check] == Datagame::CASSABLE)
	    {
	      for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
		{
		  if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		    {
		      (*it)->deleteObj();
		      it--;
		    }
		}
	      (*this->getFmap())[check]=Datagame::EXPLOSION;
	    }
	  break;
	}
      else
	{
	  for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
	    {
	      if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		{
		  (*it)->deleteObj();
		  it--;
		}
	    }
	  (*this->getFmap())[check]=Datagame::EXPLOSION;
	}
      tmp++;
      check += 15;
    }
}

void			Bomb::explleft(int posi)
{
  int			tmp;
  int			check;
  int			tmpx;
  int			tmpy;

  tmp = 1;
  check = posi - 1;

  while (tmp <= this->getRange())
    {
      tmpy = check / 15;
      tmpx = check - (tmpy * 15);
      if ((*this->getFmap())[check] == Datagame::PLEIN ||
	  (*this->getFmap())[check] == Datagame::CASSABLE)
	{
	  if ((*this->getFmap())[check] == Datagame::CASSABLE)
	    {
	      for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
		{
		  if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		    {
		      (*it)->deleteObj();
		      it--;
		    }
		}
	      (*this->getFmap())[check]=Datagame::EXPLOSION;
	    }
	  break;
	}
      else
	{
	  for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
	    {
	      if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		{
		  (*it)->deleteObj();
		  it--;
		}
	    }
	  (*this->getFmap())[check]=Datagame::EXPLOSION;
	}
      tmp++;
      check -= 1;
    }
}

void			Bomb::explright(int posi)
{
  int			tmp;
  int			check;
  int			tmpx;
  int			tmpy;

  tmp = 1;
  check = posi + 1;

  while (tmp <= this->getRange())
    {
      tmpy = check / 15;
      tmpx = check - (tmpy * 15);
      if ((*this->getFmap())[check] == Datagame::PLEIN ||
	  (*this->getFmap())[check] == Datagame::CASSABLE)
	{
	  if ((*this->getFmap())[check] == Datagame::CASSABLE)
	    {
	      for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
		{
		  if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		    {
		      (*it)->deleteObj();
		      it--;
		    }
		}
	      (*this->getFmap())[check]=Datagame::EXPLOSION;
	    }
	  break;
	}
      else
	{
	  for(std::list<Object *>::iterator it=(this->getObj())->begin(); it!=(this->getObj())->end(); it++)
	    {
	      if ((*it)->getX() == tmpx && (*it)->getY() == tmpy)
		{
		  (*it)->deleteObj();
		  it--;
		}
	    }
	  (*this->getFmap())[check]=Datagame::EXPLOSION;
	}
      tmp++;
      check += 1;
    }
}
