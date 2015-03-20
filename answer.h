# include <Siv3D.hpp>

class Answer{

public:

	void draw(Font);

	Answer();	//コンストラクタ

private:

	int x;
	int y;
	int height;
	int width;

	bool ans;

};