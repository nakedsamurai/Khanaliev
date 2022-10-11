#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


int fib(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int f = 1;
	string N;
	bool test = true;

    while (test)
    {
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
		if (stoi(N) < 1 || stoi(N) > 100){
			test = true;
			cout << "Некорректный ввод!" << endl;
			cout << endl;
            break;
		}

    }
	int res = stoi(N);
	for (int i = 1; i <= res; i++) {
		cout << fib(i) << " ";
	}
	return 0;
}