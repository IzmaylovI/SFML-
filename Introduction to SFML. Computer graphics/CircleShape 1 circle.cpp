#include <SFML/Graphics.hpp>
// ������ SFML ��� ������ � �������� 
// ��� �� ���� ����� ������ �������, �� ������� ������� SFML. ��������:
// SFML Audio ��� ������ � ����� 

int main() {
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "title"); //��������� ���������� window, ������� ����� ��� ������������ ����, ������� 800x600 px � �������������� ��������� �title�.
	window.clear(); // ����� ������� ����

	sf::CircleShape shape1(40);                      // ��������� ������-���� shape1 ������ CircleShape �������� 40px
	shape1.setPosition({ 200,120 });                 // ������� ������� ����� � ��������
	shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));  // ������� ����� ���� � ���� RGB-����������� 
	window.draw(shape1);                             // ����������� � �=���� ������ shape1

	window.display();                                // ����������� �� ������ ����, ��� ��� ���� ���������� � ����

	sf::sleep(sf::seconds(5));                       // ���� ������������ ���� ����������� ��� ����������

	return 0;
}