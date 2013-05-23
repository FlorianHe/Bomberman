//
// Open_map.cpp<2> for bomberman in /home/maku/Projets/gitBomber/Bomberman/Game
//
// Made by Guillaume
// Login   <maku@epitech.net>
//
// Started on  Mon May 20 14:28:35 2013 Guillaume
// Last update Mon May 20 17:10:23 2013 Augustin Marchand
//

#include			<iostream>
#include			<fstream>
#include			<list>
#include			<stdlib.h>
#include			"Datagame.hh"

int				main(int ac, char *av[])
{
  if (ac != 2)
    {
      std::cout << "Go fuck yourself\n";
      exit(0);
    }
  std::ifstream			map(av[1]);
  std::list<Datagame::OBJ>	another;
  if (!map)
    {
      std::cout << "Are you retard\n";
      exit(0);
    }
  else
    {
      std::string		ligne;
      std::string		mot;
      int			height;
      int			width;
      int			x;
      int			y;
      char			a;

      x = 0;
      y = 0;
      map >> mot;
      height = atoi(mot.c_str());
      map >> mot;
      width = atoi(mot.c_str());
      map.get(a);
      while (y <= height)
	{
	  x = 0;
	  while (x <= width + 1)
	    {
	      map.get(a);
	      if (a == '\n' && x < width + 1 || x == width + 1 && a != '\n')
		{
		  std::cout << "\nGo kill yourself\n";
		  exit(0);
		}
	      if (a == '\n')
		std::cout << "                                         Ceci est un \\n\n";
	      else
		{
		  std::cout << a;
		  another.push_back(static_cast<Datagame::OBJ>(a - '0'));
		}
	      x++;
	    }
	  y++;
	}
      //      std::cout << std::endl;
    }
  /*
    int				x = 0;
  for(std::list<Datagame::OBJ>::iterator it = another.begin(); it != another.end(); it++)
    {
      std::cout << (*it);
      x++;
      if (x == 15)
	{
	  std::cout << std::endl;
	  x = 0;
	}
    }
  */
}
