# include <Siv3D.hpp>

#ifndef _character_h
#define _character_h

#include "character.h"

#endif

class Debugger{	//デバッグ用クラス

public:


	Font font;

	void check( Character chara );
	void draw();

	Debugger();	//コンストラクタ

private:

	int param[3];	//rbgの値を入れる

	Rect red;
	Rect redFrame;
	Rect blue;
	Rect blueFrame;
	Rect green;
	Rect greenFrame;

};
