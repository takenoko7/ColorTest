# include <Siv3D.hpp>

class Character{

	public:
		int x;
		int y;

		int width = 60;
		int height = 60;

		int r;
		int g;
		int b;

		Font font;

		void draw();
		void move();
		void intersect(Rect rect1, Rect rect2, Rect rect3);

		Character();	//コンストラクタ

private :
	Rect player;

};