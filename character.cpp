#ifndef _character_c
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;
}

void Character::draw(){
	Box(Vec3(0, 0, 0), 10, 10, 10).draw(Palette::Pink);
}