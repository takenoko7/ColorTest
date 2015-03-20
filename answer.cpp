#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

Answer::Answer(){	//コンストラクタ
	x = 540;
	y = 380;
	width = 60;
	height = 60;
}

void Answer::draw(Font font){	//描画
	
	// 座標 (x,y) から 幅 60, 高さ 60 の正方形を描く
	Rect(x, y, 60, 60).draw(Palette::White);
	font(L"Ans").drawCenter({ x+width/2, y+height/2 }, Palette::Blue);
}
