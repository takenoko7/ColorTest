# include <Siv3D.hpp>

#ifndef _character_h
#define _character_h

#include "character.h"

#endif

class Debugger{	//�f�o�b�O�p�N���X

public:


	Font font;

	void check( Character chara );
	void draw();

	Debugger();	//�R���X�g���N�^

private:

	int param[3];	//rbg�̒l������

	Rect red;
	Rect redFrame;
	Rect blue;
	Rect blueFrame;
	Rect green;
	Rect greenFrame;

};
