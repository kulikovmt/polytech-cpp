

#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");

	//�������� �� ���� �������������� �����
	int x;
	cout << "������� ����� ������������� ��������: ";
	cin >> x;
	while (x < 0)
	{
		cout << "������� ����� ������������� ��������: ";
		cin >> x;
		if (true)
		{
			break;
		}
	}
	//����� ����� �� 1 �� ������ �����
	int i = 0;
	int sum = 0;
	for (i = 0; i <= x; i++)
	{
		sum = sum + i;
	}
	cout << "����� �� 1 �� ������ �����: " << sum << endl;

	// �������� � ���������� �������
	int arr[10];
	int a = 0;
	for (i = 10; i <= 19; i++)
	{
		arr[a] = i;
		a++;
	}
	cout << "������ �����: " << arr[0] << "\n" << "������ �����: " << arr[1] << "\n" << "������ �����: " << arr[2] << "\n" << "��������� �����: " << arr[3] << "\n" << "����� �����: " << arr[4] << "\n" << "������ �����: " << arr[5] << "\n" << "������� �����: " << arr[6] << "\n" << "������� �����: " << arr[7] << "\n" << "������� �����: " << arr[8] << "\n" << "������� �����: " << arr[9] << "\n" << endl;


	//����� �������� ��������� ������� � ������� ���������
	cout << "������ ������ �������: ";
	for (i = 0; i <= 9; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << "," << " ";
		}
	}


	//����� �������� ��������� ������� � ��������� ���������
	sum = 0;
	for (i = 0; i <= 9; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + arr[i];
		}
	}
	cout << "\n" << "����� �������� ������� �������: " << sum << endl;
}
