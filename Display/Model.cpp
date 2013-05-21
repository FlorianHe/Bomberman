//
// Model.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:45:55 2013 Helaine
// Last update Tue May 21 13:46:21 2013 Helaine
//

#include	"Model.hpp"

namespace	Model
{
  void Bomberman::initialize(void)
  {
    this->model_ = gdl::Model::load("../libgdl_gl-2012.4/assets/models/marvin.fbx");
  }

  /*Bomberman::~Bomberman(void)
  {
    //delete this->model_;
    }*/

  void Bomberman::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
    this->model_.update(gameClock);
    if (input.isKeyDown(gdl::Keys::P) == true)
      this->model_.play("Take 001");
  }

  void Bomberman::draw(void)
  {
    this->model_.draw();
  }
}
