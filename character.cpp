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

void Character::draw(){	//描画
	// 座標 (100,100) から 幅 60, 高さ 60 の正方形を描く
	player.setPos(x, y);
	player.draw( Color(r, g, b) );
}

void Character::move(){	//移動
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
	if (Input::KeySpace.pressed){	//space押すと色リセット
		r = g = b = 0;
	}
}

void Character::intersect(Rect rect1, Rect rect2, Rect rect3){	//あたり判定

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