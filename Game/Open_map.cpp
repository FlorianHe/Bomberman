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
}
