#ifndef _SELECT_COLOR_H
#define _SELECT_COLOR_H

#include "select_color.h"

#endif

SelectColor::SelectColor(int x, int y, int color){

	SelectColor::color = color;
	rect.set(x, y, size, size);

}

SelectColor::SelectColor(){
	size = 60;
	color = 0;
}

void SelectColor::draw(){

	rect.drawShadow({ 5, 5 }, 24.0, 10);
	rect.draw(color == RED ? Palette::Red : color == GREEN ? Palette::Green : Palette::Blue);

}

Rect SelectColor::getRect(){
	return rect;
}