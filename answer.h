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
	Font font;

	bool ans;

};