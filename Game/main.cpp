//
// main.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:32:51 2013 Guillaume
// Last update Mon May 20 17:36:03 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<map>
#include		<vector>
#include		<cstdlib>
#include		<fstream>
#include		"Datagame.hh"
#include		"Character.hh"
#include		"Object.hh"
#include		"Bomb.hh"

std::vector<Datagame::OBJ>				Open_map(int ac, char *av[])
{
  if (ac != 2)
    {
      std::cout << "Go fuck yourself\n";
      exit(0);
    }
  std::ifstream			map(av[1]);
  std::vector<Datagame::OBJ>	another;
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
  return (another);
}

int			main(int ac, char **av)
{
  std::vector<Datagame::OBJ>	hey;
  std::vector<Datagame::OBJ>	hihi;
  std::list<Object *>		haha;

  hey = Open_map(ac, av);

  Character			*woot = new Character(Datagame::P1, &hey, &haha, 8, 2);

  Character			*woot2 = new Character(Datagame::P2, &hey, &haha, 10, 3);
  
  Bomb				*bomb1 = new Bomb(&hey, &haha, 3, 8, 3);
 
  bomb1->explosion();
  int				x = 0;
  for(std::vector<Datagame::OBJ>::iterator it=hey.begin(); it!=hey.end(); it++)
    {
      std::cout << (*it);
      if (x == 14)
	{
	  std::cout << std::endl;
	  x = -1;
	}
      x++;
    }

  for(std::list<Object *>::iterator it=haha.begin(); it!=haha.end(); it++)
    {
      std::cout << (*it)->getType() << std::endl;
    }
     

  return 0;
}
