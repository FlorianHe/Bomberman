//
// Model.cpp for bbman in /home/helain_f/Semestre_3/cpp/Bomberman/Display
// 
// Made by Helaine
// Login   <helain_f@epitech.net>
// 
// Started on  Tue May 21 11:45:55 2013 Helaine
// Last update Wed May 22 12:03:10 2013 Helaine
//

#include	"Model.hpp"

namespace	Model
{
  void Bomberman::initialize(void)
  {
    this->model_ = gdl::Model::load("libgdl_gl-2012.4/assets/marvin.fbx");
  }

  void Bomberman::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {
    this->model_.update(gameClock);
    if (input.isKeyDown(gdl::Keys::Up) == true)
      {
	this->rotation_.y = (int)rotation_.y + 90;
	this->model_.play("Take 001");
      }
    else if (input.isKeyDown(gdl::Keys::Down) == true)
      {
	this->rotation_.y = (int)rotation_.y + 90;
	this->model_.play("Take 001");
      }
    else if (input.isKeyDown(gdl::Keys::Left) == true)
      {
	this->rotation_.y = (int)rotation_.y + 90;
	this->model_.play("Take 001");
      }
    else if (input.isKeyDown(gdl::Keys::Right) == true)
      {
	this->rotation_.y = (int)rotation_.y + 90;
	this->model_.play("Take 001");
      }
  }

  void Bomberman::draw(void)
  {
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.0f, -500.0f, 0.0f);
    glRotatef(this->rotation_.y, 0.0f, 1.0f, 0.0f);
    glRotatef(this->rotation_.x, 1.0f, 0.0f, 0.0f);
    this->model_.draw();
    glPopMatrix();
  }
}
