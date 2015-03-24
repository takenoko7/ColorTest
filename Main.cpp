# include <Siv3D.hpp>


#ifndef _character_h
#define _character_h

#include "character.h"

#endif

#ifndef _ANSWER_H
#define _ANSWER_H

#include "answer.h"

#endif

#ifndef _SELECT_COLOR_H
#define _SELECT_COLOR_H

#include "select_color.h"

#endif

void Main(){

	Character chara;
	Answer answer;
	SelectColor color[3];

	//音楽再生
	if (!Midi::Open(L"Example/ColorTest.mid")){
		return;
	}
	Midi::PlayLoop();

	//SelectColorのインスタンス化
	for(int i = 0; i < 3; i++){
		new(color + i) SelectColor(i*Window::Width()/3+70, 150, i);
	}

	while (System::Update()){

		for (auto i : color){
			i.draw();
		}

		chara.move();
		chara.draw();
		chara.intersect( chara, color[0].getRect(), color[1].getRect(), color[2].getRect() );

		answer.draw();

	}
}