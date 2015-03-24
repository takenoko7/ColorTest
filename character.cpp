#ifndef _character_h
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;

	r = 0;
	g = 0;
	b = 0;

	player.setPos(x, y);
	player.setSize(width, height);

	font(30);
}

void Character::draw(){	//�`��
	// ���W (100,100) ���� �� 60, ���� 60 �̐����`��`��
	player.setPos(x, y);
	player.draw( Color(r, g, b) );
}

void Character::move(){	//�ړ�
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
	if (Input::KeySpace.pressed){	//space�����ƐF���Z�b�g
		r = g = b = 0;
	}
}

void Character::intersect(Rect rect1, Rect rect2, Rect rect3){	//�����蔻��

	if (player.intersects(rect1)){
		font(L"red intersects!!").draw(0, 0, Palette::White);
		if (r < 255){
			r++;
		}
	}
	else if (player.intersects(rect2)){
		font(L"green intersects!!").draw(0, 0, Palette::White);
		if (g < 255){
			g++;
		}
	}
	else if (player.intersects(rect3)){
		font(L"blue intersects!!").draw(0, 0, Palette::White);
		if (b < 255){
			b++;
		}
	}


}