#include <iostream>
#include <Windows.h>



using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Задумайте число N от 1 до 100, а я угадаю!" << endl;
	int t = 101, b = 0, mid, k, q = 0;
	while (t != b)
	{
		mid = (t + b)/2;
		cout << "N больше " << mid << "(1 да, 2 нет, 3 равно)?"<< endl;
		cin >> k;
		++q;
		if (k == 1)
			b = mid;
		else if (k == 2)
			t = mid;
		else if (k == 3)
			b = t;
		
	}
	cout << "Вы задумали "<< mid << "! А я молодец! Количество попыток: " << q;
	return 0;
}