#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

Answer::Answer(){	//�R���X�g���N�^
	x = 540;
	y = 380;
	width = 60;
	height = 60;
	rect.setPos(x, y);
	rect.setSize(width, height);
	font(30);
}

void Answer::draw(){	//�`��
	
	// ���W (x,y) ���� �� 60, ���� 60 �̐����`��`��
	rect.drawShadow({ 5, 5 }, 24.0, 10);
	rect.draw(Palette::White);
	font(L"Ans").drawCenter({ x+width/2, y+height/2 }, Palette::Blue);
}
