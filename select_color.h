#include<Siv3D.hpp>

#define RED 0
#define GREEN 1
#define BLUE 2

class SelectColor{

public:
	SelectColor();
	//SelectColor(x座標, y座標, 色ID) ...色ID 0=red, 1=green, 2=blue
	SelectColor(int x, int y, int color);
	void draw();
private:
	Rect rect;
	int size;
	int color; //自分が持っている色のID 0:r, 1:g, 2:b

};