

#include <iostream>

using namespace std;



int main()
{

	setlocale(LC_ALL, "Russian");

	//ввод знвчения x и y
	float x;
	cout << "Ââåäèòå ïåðâîå ÷èñëî: ";
	cin >> x;
	cout << "Ââåäèòå âòîðîå ÷èñëî:";
	float y;
	cin >> y;

	//ñðåäíåå àðèôìåòè÷åñêîå äâóõ ââåä¸ííûõ ÷èñåë
	cout << "Ñðåäíåå àðèôìåòè÷åñêîå äâóõ ââåä¸ííûõ ÷èñåë: " << ((x + y) / 2) << endl;

	//ââîä çíàêà
	char znak;
	cout << "Ââåäèòå çíàê îïåðàöèè: +, -, * èëè / ";
	cin >> znak;

	//îïåðàöèè ñëîæåíèÿ, âû÷èòàíèÿ, óìíîæåíèå, äåëåíèÿ íàä ââåäåííûìè çíà÷åíèÿìè 
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
		cout << "Îøèáêà" << endl;
	}


}
