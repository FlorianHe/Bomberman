//
// Model.hpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:42:10 2013 Helaine
// Last update Tue May 21 14:14:09 2013 Helaine
//

#ifndef		BBMAN_H_
#define		BBMAN_H_

#include	<GL/gl.h>
#include	<GL/glu.h>
#include	<string>
#include	<iostream>

#include	"../libgdl_gl-2012.4/include/Game.hpp"
#include	"../libgdl_gl-2012.4/include/Resource.hpp"
#include	"../libgdl_gl-2012.4/include/Image.hpp"
#include	"../libgdl_gl-2012.4/include/Model.hpp"
#include	"../libgdl_gl-2012.4/include/ModelException.hpp"
#include	"AObject.hpp"
#include	"Vector3f.hpp"

namespace	Model
{
  class Bomberman : public AObject
  {
  public:
    //Bomberman(void);
    //virtual ~Bomberman(void);
    void	initialize(void);
    void	update(gdl::GameClock const &, gdl::Input &);
    void	draw(void);
    private:
    gdl::Model	model_;
    gdl::Image	texture_;
  };
}

#endif
