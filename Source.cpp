#include <SFML/Graphics.hpp>
#include"settings.h"
#include"roadobj.h"


using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		"PINDABLAYTSKAYA HUYNYA",
		Style::Close | Style::Titlebar
	);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2, 0 });
	window.setFramerateLimit(FPS);

	RoadObj grass;
	roadObjInit(grass, GRASS_START_POS, GRASS_FILE_NAME);
	RoadObj road;
	roadObjInit(road, ROAD_START_POS, ROAD_FILE_NAME);

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ����	
		window.display();
		window.clear();
		window.draw(grass.sprite);
		window.draw(road.sprite);
		/*window.draw();*/
	}
	return 0;
}
