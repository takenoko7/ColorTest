#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

Answer::Answer(){	//�R���X�g���N�^
	x = 540;
	y = 380;
	width = 60;
	height = 60;
}

void Answer::draw(Font font){	//�`��
	
	// ���W (x,y) ���� �� 60, ���� 60 �̐����`��`��
	Rect(x, y, 60, 60).draw(Palette::White);
	font(L"Ans").drawCenter({ x+width/2, y+height/2 }, Palette::Blue);
}
