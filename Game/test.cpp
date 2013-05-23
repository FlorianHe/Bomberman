//
// test.cpp for Test in /home/mizuko/C++/Bomberman/Game
//
// Made by Augustin Marchand
// Login   <mizuko@epitech.net>
//
// Started on  Thu May 23 11:03:41 2013 Augustin Marchand
// Last update Thu May 23 14:59:30 2013 Augustin Marchand
//

#include				<stdlib.h>
#include				"Parseur.hh"

int					main()
{
  Parseur test("01.map", 2, 2);
  std::vector<Datagame::OBJ>		map;

  if (test.Check() == 1)
    std::cout << "Nice\n";
  else
    {
      std::cout << "Fail\n";
      exit (-1);
    }
  if (test.Begin() == 1)
    std::cout << "Nice\n";
  else
    {
      std::cout << "Fail\n";
      exit (-1);
    }
  map = test.getMap();
}
