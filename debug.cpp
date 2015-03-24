# include <Siv3D.hpp>

#ifndef _debug_h
#define _debug_h

#include "debug.h"

#endif

Debugger::Debugger(){
	redFrame.set(10, 10, 10, 120);
	blueFrame.set(35, 10, 10, 120);
	greenFrame.set(60, 10, 10, 120);
}

void Debugger::draw(){	//ÉQÅ[ÉWï`âÊ
	redFrame.drawFrame( 0, 5, Palette::Red );
	blueFrame.drawFrame(0, 5, Palette::Blue);
	greenFrame.drawFrame(0, 5, Palette::Green);

	red.draw( Palette::Red );
	blue.draw( Palette::Blue );
	green.draw( Palette::Green );
}

void Debugger::check( Character chara ){
	param[0] = ( 0.48 ) * double(chara.r);
	red.set(10, 130, 10, -param[0]);
	param[1] = ( 0.48 ) * double(chara.g);
	blue.set(35, 130, 10, -param[1]);
	param[2] = ( 0.48 ) * double(chara.b);
	green.set(60, 130, 10, -param[2]);
}