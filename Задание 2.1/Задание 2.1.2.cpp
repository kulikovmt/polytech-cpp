

#include <iostream>

using namespace std;



int main()
{

	setlocale(LC_ALL, "Russian");

	//���� �������� x � y
	float x;
	cout << "������� ������ �����: ";
	cin >> x;
	cout << "������� ������ �����:";
	float y;
	cin >> y;

	//������� �������������� ���� �������� �����
	cout << "������� �������������� ���� �������� �����: " << ((x + y) / 2) << endl;

	//���� �����
	char znak;
	cout << "������� ���� ��������: +, -, * ��� / ";
	cin >> znak;

	//�������� ��������, ���������, ���������, ������� ��� ���������� ���������� 
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
		cout << "������" << endl;
	}


}