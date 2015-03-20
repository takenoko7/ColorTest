# include <Siv3D.hpp>

#ifndef _character_h
#define _character_h

	#include "character.h"

#endif

void Main(){

	Character chara;

	while (System::Update()){

		Graphics3D::FreeCamera();
		chara.move();
		chara.draw();

	}
}