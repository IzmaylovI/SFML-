#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
	RenderWindow window(VideoMode(60, 400), "traffic lights");
	window.clear();
	
	RectangleShape shape1;
	shape1.setSize({ 150,400 });
	shape1.setRotation(0);
	shape1.setPosition({ 0,0 });
	shape1.setFillColor(Color(67,67,67));
	window.draw(shape1);

	CircleShape shape2;
	shape2.setFillColor(Color::Green);
	shape2.setRadius(60);
	shape2.setPosition({ 14,10 });
	window.draw(shape2);

	CircleShape shape3;
	shape3.setFillColor(Color::Yellow);
	shape3.setRadius(60);
	shape3.setPosition({ 14,140 });
	window.draw(shape3);

	CircleShape shape4;
	shape4.setFillColor(Color::Red);
	shape4.setRadius(60);
	shape4.setPosition({ 14,270 });
	window.draw(shape4);

	window.display();
	sleep(seconds(10));

	return 0;

}