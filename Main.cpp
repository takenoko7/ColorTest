
# include <Siv3D.hpp>

void Main()
{
	while (System::Update())
	{
		Graphics3D::FreeCamera();
		Box(Vec3(0, 0, 0), 10, 10, 10).draw(Palette::Pink);
	}
}
