#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int f = 1;
	string N;
	bool test = true;

    while (test)
    {
        cout << "Введите число, факториал которого вам нужно найти: ";
        getline(cin, N);
        for (int i = 0; i < N.size(); i++)
        {
            if (N[i] >= '0' && N[i] <= '9')
				test = false;
            else
            {
                test = true;
                cout << "Некорректный ввод!" << endl;
                cout << endl;
                break;
            }
        }
    }
	int res = stoi(N);
	for (int i = 1; i <= res;i++){
		f = f * i;
	}
	cout << f << endl;
	return 0;
}