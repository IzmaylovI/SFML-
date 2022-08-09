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

	window.display();                                // Отображение на экране того, что уже было отображено в окне

	sf::sleep(sf::seconds(5));                       // Окно отображается пока выполняется эта инструкция

	return 0;
}