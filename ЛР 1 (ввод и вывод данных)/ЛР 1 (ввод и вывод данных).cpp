#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	c = sqrt(a * b);
	cout <<"Среднее геометрическое a и b = "<<c;
}