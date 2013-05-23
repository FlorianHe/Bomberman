//
// Parseur.hh for PArseur in /home/mizuko/C++/Bomberman/Game
//
// Made by Augustin Marchand
// Login   <mizuko@epitech.net>
//
// Started on  Thu May 23 11:06:52 2013 Augustin Marchand
// Last update Thu May 23 14:57:40 2013 Augustin Marchand
//

#ifndef					PARSEUR_HH__
#define					PARSEUR_HH__

#include				<vector>
#include				<list>
#include				<string>
#include				<fstream>
#include				"Datagame.hh"
#include				"Object.hh"


class					Parseur
{
private:

  std::vector<Datagame::OBJ>		_map;
  std::list<Object *>			_obj;
  std::string				_path;
  std::ifstream				_path_map;
  int					_height;
  int					_width;
  int					_players;
  int					_ia;

public:

					Parseur(std::string, int, int);
  virtual				~Parseur();
  int					Check();
  int					Begin();
  std::vector<Datagame::OBJ>		getMap();
};

#endif
