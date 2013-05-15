//
// Vector3f.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Wed May 15 14:52:21 2013 Helaine
// Last update Wed May 15 14:54:33 2013 Helaine
//

#ifndef		VECTOR_H_
#define		VECTOR_H_

struct		Vector3f
{
  float x;
  float y;
  float z;

  Vector3f(void);
  Vector3f(float x, float y, float z);
};

Vector3f::Vector3f(void)
: x(0.0f), y(0.0f), z(0.0f)
{}

Vector3f::Vector3f(float x, float y, float z)
: x(x), y(y), z(z)
{}
