#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string w, temp, l;
	char t = 0;
	int k = 0, e = 0;
	cout << "������� �����: ";
	cin >> w;
	string p(w.size(),'-');
	cout << p << endl;
	while (w != p){
		cout << "������� �����: ";
		cin >> l;
		if (l.size() == 1){
			for (int i = 0; i < temp.length(); i++){ // �������� �� ��������� �����
				if (temp[i] == l[0])
					t++;							// t = 0 ���� ����� �� ���� 
			}
			if (t == 0){
				temp.push_back(l[0]);
				for (int i = 0; i < w.length(); i++){
					if (l[0] == w[i]){
						k++;
						p[i] = l[0];
					}
				}

				if (k == 0)
						cout << "��� ����� �����!" << endl << endl;
					else 
						cout << "�������!" << endl << endl;
					cout << p << endl;
				}
			else 
				cout << "��� ����� ��� ����, ���������� ��� ���." << endl << endl;
			t = 0;
		}
		else {
			if (w == l){
				p = l;
				e = 1;
			}
			else {
				cout << "� ���������, �� �� ������� �����. �� ���������." << endl;
				e = 2;
			}

		}
		if (e != 0)
			break;
	}
	if (e == 1)
		cout << "�� ������� ����� � " << p << "! ����������!" << endl;
	return 0;
}