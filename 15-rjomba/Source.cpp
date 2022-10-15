#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int solution(int number) {
	int sum = 0;
	while (number) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname;
	int birth;
	cout << "���: ";
	cin >> name;
	cout << endl;
	cout << "�������: ";
	cin >> surname;
	cout << endl;
	cout << "��� ��������: ";
	cin >> birth;
	string films[28] = { "������","������� ����","������","����������","����","����","12 �������","������-���","������","�����","�����","������������","�� ����",
	"����������� �������","���������� ��������","�������","��������","�������� �����","���� ������ �������","11 ������ ������","��������� ���� �����������","������",
	"������������ �����","����� �� ��������","��������","��������� �����","���� �� ������","���������� ��������" };
	string selebs[28] = { "������ ������","���� ����","��������� �����","��� ������ ����","����� �����","������� ��������","�������� �������","�������� ������ ������",
		"����� ����","������� �����","������� �����","���� ��� ���","��������� �������","������� �����","��� ���������","���� ����","������ �����","����� �����",
		"������� �����","���� ���������","���� ������","���� ��������","������� ��������","��� ��������� �����","�������� �������","��� ������","����� �������","����� �����������" };
	string songs[9] = { "King Crimson - \"Epitaph\"","�������� - \"25 � 10\"","The Strokes - \"Hard to explain\"","Bob Dylan - \"Hurricane\"","The Police - \"Roxanne\"",
	"Blondie - \"Atomic\"","Radiohead - \"Idioteque\"","The Cure - \"Lovesong\"","The Mamas And The Papas - \"California Dreamin'\"" };
	char litters[28] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�'};
	char n,s;
	n = tolower(name[0]);
	s = tolower(surname[0]);
	int f, v;
	for (int j = 0; j < 28; j++) {
		if (n == litters[j])
			f = j;
		if (s == litters[j])
			v = j;
	}
	int sas = solution(birth);
	int sol = solution(sas) - 1;
	cout << "�����! ��� ����� ��� " << films[f] << ", ������ " << selebs[v] << ". ����������� ���������� ��� ���: " << songs[sol] << endl;
} 