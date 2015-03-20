#ifndef _character_c
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;
}

void Character::draw(){	//�`��
	// ���W (100,100) ���� �� 60, ���� 60 �̐����`��`��
	Rect(x, y, 60, 60).draw( Palette::White );
}

void Character::move(){	//�ړ�
	if (Input::KeyD.pressed){
		x += 5;
	}
	if (Input::KeyA.pressed){
		x -= 5;
	}
	if (Input::KeyW.pressed){
		y -= 5;
	}
	if (Input::KeyS.pressed){
		y += 5;
	}
}