//
// test.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May  7 15:53:14 2013 Helaine
// Last update Tue May  7 16:12:24 2013 Helaine
//

#include <Clock.hpp>
#include <Color.hpp>
#include <Game.hpp>
#include <GameClock.hpp>
#include <Image.hpp>
#include <Input.hpp>
#include <Model.hpp>
#include <Window.hpp>
#include	<string>
#include	<iostream>

class		Test : public gdl::Game
{
public:
  Test();
  virtual ~Test();
private:
  void		draw();
  void		initialize();
  void		unload();
  void		update();
};	
