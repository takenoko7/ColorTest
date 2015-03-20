#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

Answer::Answer(){
	x = 540;
	y = 380;
	width = 60;
	height = 60;
}

void Answer::draw(Font font){	//•`‰æ
	
	// À•W (x,y) ‚©‚ç • 60, ‚‚³ 60 ‚Ì³•ûŒ`‚ğ•`‚­
	Rect(x, y, 60, 60).draw(Palette::White);
	font(L"Ans").drawCenter({ x+width/2, y+height/2 }, Palette::Blue);
}
