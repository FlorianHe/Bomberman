//
// main.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Fri May 10 14:32:51 2013 Guillaume
// Last update Fri May 10 15:30:34 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		<map>
#include		"Datagame.hh"
#include		"Object.hh"
#include		"Bomb.hh"

int			main()
{
  std::list<Datagame::OBJ>	hey;
  Bomb			*woot = new Bomb(hey, 3, 2, 5);

  std::cout << woot->getX() << std::endl;
  return 0;
}
