#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string prvt;
	cin >> prvt;
	cout << "������, " + prvt + "!" << endl;
	return 0;
}