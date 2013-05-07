//
// Bomb.cpp for Bomberman in /home/maku/Projets/Bomberman
// 
// Made by Guillaume
// Login   <maku@epitech.net>
// 
// Started on  Tue May  7 10:02:26 2013 Guillaume
// Last update Tue May  7 10:15:47 2013 Guillaume
//

#include		<iostream>
#include		<string>
#include		"Bomb.hh"

Bomb::Bomb(int range, int x, int y) :
  _range(range),
  _x(x),
  _y(y),
  _time(4)
{
  
}

Bomb::~Bomb()
{

}

