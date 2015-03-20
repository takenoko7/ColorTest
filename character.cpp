#ifndef _character_c
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;
}

void Character::draw(){	//•`‰æ
	// À•W (100,100) ‚©‚ç • 60, ‚‚³ 60 ‚Ì³•ûŒ`‚ğ•`‚­
	Rect(x, y, 60, 60).draw( Palette::White );
}

void Character::move(){	//ˆÚ“®
	if (Input::KeyRight.pressed){
		x += 5;
	}
	if (Input::KeyLeft.pressed){
		x -= 5;
	}
	if (Input::KeyUp.pressed){
		y -= 5;
	}
	if (Input::KeyDown.pressed){
		y += 5;
	}
}