#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
	RenderWindow win(VideoMode(800, 800), "House");

	win.clear();

	RectangleShape wall;
	wall.setFillColor(Color(128, 64, 48));
	wall.setPosition({ 100,300 });
	wall.setSize({ 500, 300 });
	win.draw(wall);

	RectangleShape door;
	door.setSize({ 90, 200 });
	door.setPosition({ 125, 400 });
	door.setFillColor({ Color::Black });
	win.draw(door);

	ConvexShape roof;
	roof.setFillColor(Color(90, 30, 23));
	roof.setPointCount(4);
	roof.setPosition(350, 200);
	roof.setPoint(0, { -150,0 });
	roof.setPoint(1, { 150,0 });
	roof.setPoint(2, { 330,140 });
	roof.setPoint(3, { -330,140 });
	win.draw(roof);

	CircleShape circle1;
	circle1.setRadius(15);
	circle1.setFillColor(Color(160, 160, 160));
	circle1.setPosition({ 470,120 });
	win.draw(circle1);


	CircleShape circle2;
	circle2.setRadius(20);
	circle2.setFillColor(Color(160, 160, 160));
	circle2.setPosition({ 475,90 });
	win.draw(circle2);

	CircleShape circle3;
	circle3.setRadius(25);
	circle3.setFillColor(Color(160, 160, 160));
	circle3.setPosition({ 480,50 });
	win.draw(circle3);

	CircleShape circle4;
	circle4.setRadius(25);
	circle4.setFillColor(Color(160, 160, 160));
	circle4.setPosition({ 490,20 });
	win.draw(circle4);

	RectangleShape down_tube;
	down_tube.setFillColor(Color(50, 50, 50));
	down_tube.setSize({ 40,90 });
	down_tube.setPosition({ 450,180 });
	win.draw(down_tube);

	RectangleShape top_tube;
	top_tube.setFillColor(Color(50, 50, 50));
	top_tube.setSize({ 70,40 });
	top_tube.setPosition({ 435,145 });
	win.draw(top_tube);


	win.display();
	sleep(seconds(5));

	return 0;
}