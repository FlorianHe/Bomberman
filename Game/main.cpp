//
// main.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:32:51 2013 Guillaume
// Last update Mon May 20 14:36:22 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<map>
#include		<cstdlib>
#include		<fstream>
#include		"Datagame.hh"
#include		"Character.hh"
#include		"Object.hh"
#include		"Bomb.hh"

std::list<Datagame::OBJ>				Open_map(int ac, char *av[])
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
      while (y < height)
	{
	  std::cout << "[";
	  if (y < 10)
	    std::cout << ".";
	  std::cout << y << "]" << ": ";
	  x = 0;
	  while (x <= width)
	    {
	      map.get(a);
	      std::cout << a;
	      if (a != '\n')
		{
		  another.push_back(static_cast<Datagame::OBJ>(a - '0'));
		}
	      x++;
	    }
	  y++;
	}
    }
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
  return (another);
}

int			main(int ac, char **av)
{
  std::list<Datagame::OBJ>	hey;
  std::list<Datagame::OBJ>	hihi;
  std::list<Object *>		haha;

  hey = Open_map(ac, av);

  Character			*woot = new Character(Datagame::P1, &hey, &haha, 3, 2);
 
  woot->createBomb();
  for(std::list<Object *>::iterator it=haha.begin(); it!=haha.end(); it++)
    {
      std::cout << "woot" << std::endl;
      std::cout << (*it)->getType() << std::endl;
    }
  woot->deleteObj();
  for(std::list<Object *>::iterator it=haha.begin(); it!=haha.end(); it++)
    {
      std::cout << "woot" << std::endl;
      std::cout << (*it)->getType() << std::endl;
    }
  return 0;
}
