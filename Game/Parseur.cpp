//
// Parseur.cpp for PArseur in /home/mizuko/C++/Bomberman/Game
//
// Made by Augustin Marchand
// Login   <mizuko@epitech.net>
//
// Started on  Thu May 23 11:06:00 2013 Augustin Marchand
// Last update Thu May 23 15:00:22 2013 Augustin Marchand
//

#include				<vector>
#include				<list>
#include				<iomanip>
#include				<locale>
#include				<sstream>
#include				<string>
#include				"Parseur.hh"

Parseur::				Parseur(std::string path, int players, int ia)
  : _path(path),
    _players(players),
    _ia(ia)
{
}

Parseur::				~Parseur()
{
}

int Parseur::				Check()
{
  std::string				word;

  this->_path_map.open(this->_path.c_str());
  if (!this->_path_map)
    return -1;
  this->_path_map >> word;
  if (!(std::istringstream(word) >> this->_height))
    return -1;
  this->_path_map >> word;
  if (!(std::istringstream(word) >> this->_width))
    return (-1);
  this->_path_map.get();
  return (1);
}

int Parseur::				Begin()
{
  int					x;
  int					y;
  char					c;

  y = 0;
  while (y <= this->_height)
    {
      x = 0;
      while (x <= this->_width + 1)
	{
	  this->_path_map.get(c);
	  if (c == '\n' && x < this->_width + 1 || x == this->_width + 1 && c != '\n')
	    {
	      std::cout << "\nGo kill yourself\n";
	      return (-1);
	    }
	  if (c != '\n')
	    {
	      std::cout << c;
	      this->_map.push_back(static_cast<Datagame::OBJ>(c - '0'));
	    }
	  else
	    std::cout << "                                         Ceci est un \\n\n";
	  x++;
	}
      y++;
    }
  return (1);
}

std::vector<Datagame::OBJ> Parseur::	getMap()
{
  int                         x = 0;

  for(std::vector<Datagame::OBJ>::iterator it = this->_map.begin(); it != this->_map.end(); it++)
    {
      std::cout << (*it);
      x++;
      if (x == this->_width + 1)
        {
	  std::cout << std::endl;
          x = 0;
        }
    }
  return (this->_map);
}
