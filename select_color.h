#include<Siv3D.hpp>

#define RED 0
#define GREEN 1
#define BLUE 2

class SelectColor{

public:
	SelectColor();
	//SelectColor(x���W, y���W, �FID) ...�FID 0=red, 1=green, 2=blue
	SelectColor(int x, int y, int color);
	void draw();
private:
	Rect rect;
	int size;
	int color; //�����������Ă���F��ID 0:r, 1:g, 2:b

};