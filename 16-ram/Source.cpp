#include <iostream>
#include <iomanip>

using namespace std;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 3;
const unsigned int DIM3 = 3;

int main() {
    int cnt = 1;
    int*** ary = new int** [DIM1];
    for (int i = 0; i < DIM1; i++) {
        ary[i] = new int* [DIM2];
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = new int[DIM3];
        }
    }
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                ary[i][j][k] = cnt++;
                cout << setw(4) << ary[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
    cnt--;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                ary[i][j][k] = cnt--;
                cout << setw(4) << ary[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            delete[] ary[i][j];
        }
        delete[] ary[i];
    }
    delete[] ary;

    return 0;
}