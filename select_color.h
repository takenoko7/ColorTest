#include<Siv3D.hpp>

#define RED 0
#define GREEN 1
#define BLUE 2

class SelectColor{

public:
	SelectColor();
	SelectColor(int x, int y, int color);
	void draw();
private:
	Rect rect;
	int size;
	int color; //©•ª‚ª‚Á‚Ä‚¢‚éF‚ÌID 0:r, 1:g, 2:b

};