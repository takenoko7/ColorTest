# include <Siv3D.hpp>

class Character{

	public:
		int x;
		int y;

		int r;
		int g;
		int b;

		Font font;

		void draw();
		void move();
		void intersect(Character chara, Rect rect1, Rect rect2, Rect rect3);

		Character();	//コンストラクタ

};