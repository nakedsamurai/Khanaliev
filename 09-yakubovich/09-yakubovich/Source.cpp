#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string w;
	char l;
	int k = 0;
	cout << "������� �����: ";
	cin >> w;
	string p(w.size(),'-');
	cout << p << endl;
	while (w != p){
		cout << "������� �����: ";
		cin >> l;
		for (int i = 0; i < w.length(); i++){
			if (l == w[i]){
				k++;

				p[i] = l;
			}
		}
		if (k == 0)
				cout << "��� ����� �����!" << endl << endl;
			else 
				cout << "�������!" << endl << endl;
			cout << p << endl;
	}
	cout << "�� ������� ����� � " << p << "! ����������!" << endl;
	return 0;
}