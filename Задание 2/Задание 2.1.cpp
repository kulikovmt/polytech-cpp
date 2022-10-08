

#include <iostream>

using namespace std;



int main()
{

	setlocale(LC_ALL, "Russian");

	//ввод знвчения x и y
	float x;
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число:";
	float y;
	cin >> y;

	//среднее арифметическое двух введённых чисел
	cout << "Среднее арифметическое двух введённых чисел: " << ((x + y) / 2) << endl;

	//ввод знака
	char znak;
	cout << "Введите знак операции: +, -, * или / ";
	cin >> znak;

	//операции сложения, вычитания, умножение, деления над введенными значениями 
	switch (znak)
	{
	case '+':
		cout << "x + y = " << x + y << endl;
		break;
	case '-':
		cout << "x - y = " << x - y << endl;
		break;
	case '*':
		cout << "x * y = " << x * y << endl;
		break;
	case '/':
		cout << "x / y = " << x / y << endl;
		break;
	default:
		cout << "Ошибка" << endl;
	}


}
