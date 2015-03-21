#ifndef _SELECT_COLOR_H
#define _SELECT_COLOR_H

#include "select_color.h"

#endif

SelectColor::SelectColor(int x, int y, int color){

	SelectColor::x = x;
	SelectColor::y = y;
	SelectColor::color = color;
	width = 60;
	height = 60;

}

SelectColor::SelectColor(){
	x = 0;
	y = 0;
	color = 0;
	width = 0;
	height = 0;
}

void SelectColor::draw(){

	Rect(x, y, width, height).draw(color == RED ? Palette::Red : color == GREEN ? Palette::Green : Palette::Blue);

}