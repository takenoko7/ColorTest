# include <Siv3D.hpp>

#ifndef _character_h
#define _character_h

#include "character.h"

#endif

#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

void Main(){

	Character chara;
	Answer answer;
	const Font font(30);

	while (System::Update()){

		Graphics3D::FreeCamera();
		chara.move();
		chara.draw();

		answer.draw(font);

	}
}