#ifndef _character_h
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;

	font(30);
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

void Character::intersect(Character chara, Rect rect1, Rect rect2, Rect rect3){	//‚ ‚½‚è”»’è

	const Rect player(chara.x, chara.y, 60, 60);

	if (player.intersects(rect1)){
		font( L"rect1 intersects!!" ).draw( 0, 0, Palette::White );
	}
	else if (player.intersects(rect2)){
		font(L"rect2 intersects!!").draw(0, 0, Palette::White);
	}
	else if (player.intersects(rect3)){
		font(L"rect3 intersects!!").draw(0, 0, Palette::White);
	}


}