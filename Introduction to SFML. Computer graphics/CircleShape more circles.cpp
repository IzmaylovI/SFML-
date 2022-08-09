#include <SFML/Graphics.hpp>
// Модуль SFML для работы с графикой 
// Так же есть много других модулей, из которых состоит SFML. Например:
// SFML Audio для работы с аудио 

int main() {
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "title"); //объявляет переменную window, которая имеет тип “графическое окно”, размеры 800x600 px и незамысловатый заголовок “title”.
	window.clear(); // метод очищает окно

	sf::CircleShape shape1(40);                      // Создается объект-круг shape1 класса CircleShape размером 40px
	shape1.setPosition({ 200,120 });                 // Задание позиции круга в пикселях
	shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));  // Задание цвета крга в виду RGB-компонентов 
	window.draw(shape1);                             // Отображение в к=окне обекта shape1

	sf::CircleShape shape2(48);
	shape2.setPosition({ 260,120 });
	shape2.setFillColor(sf::Color(0x0, 0xFF, 0x0));
	window.draw(shape2);

	sf::CircleShape shape3(60);
	shape3.setPosition({ 320,160 });
	shape3.setFillColor(sf::Color(0x0, 0x0, 0xFF));
	window.draw(shape3);

	sf::CircleShape shape4(75);
	shape4.setPosition({ 330,220 });
	shape4.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
	window.draw(shape4);

	window.display();                                // Отображение на экране того, что уже было отображено в окне

	sf::sleep(sf::seconds(5));                       // Окно отображается пока выполняется эта инструкция

	return 0;
}