# include <Siv3D.hpp>

class Answer{

public:

	void draw();

	Answer();	//コンストラクタ

private:

	int x;
	int y;
	int height;
	int width;
	Rect rect;
	Font font;

	bool ans;

};