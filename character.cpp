#ifndef _character_c
#define _character_h

#include "character.h"

#endif

Character::Character(){
	x = 0;
	y = 0;
}

void Character::draw(){	//描画
	// 座標 (100,100) から 幅 60, 高さ 60 の正方形を描く
	Rect(x, y, 60, 60).draw( Palette::White );
}

void Character::move(){	//移動
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