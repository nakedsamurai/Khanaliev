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
	cout << "Введите слово: ";
	cin >> w;
	string p(w.size(),'-');
	cout << p << endl;
	while (w != p){
		cout << "Введите букву: ";
		cin >> l;
		for (int i = 0; i < w.length(); i++){
			if (l == w[i]){
				k++;

				p[i] = l;
			}
		}
		if (k == 0)
				cout << "Нет такой буквы!" << endl << endl;
			else 
				cout << "Угадали!" << endl << endl;
			cout << p << endl;
	}
	cout << "Вы угадали слово — " << p << "! Поздравляю!" << endl;
	return 0;
}