#include <iostream>
#include <Windows.h>



using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "��������� ����� N �� 1 �� 100, � � ������!" << endl;
	int t = 101, b = 0, mid, k, q = 0;
	while (t != b)
	{
		mid = (t + b)/2;
		cout << "N ������ " << mid << "(1 ��, 2 ���, 3 �����)?"<< endl;
		cin >> k;
		++q;
		if (k == 1)
			b = mid;
		else if (k == 2)
			t = mid;
		else if (k == 3)
			b = t;
		
	}
	cout << "�� �������� "<< mid << "! � � �������! ���������� �������: " << q;
	return 0;
}