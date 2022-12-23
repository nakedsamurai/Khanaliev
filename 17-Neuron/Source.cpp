#include <iostream>
#include <cmath>
using namespace std;

class Neuron
{
public:
	float* weights;
	int n;
	bool flag;
	Neuron(float* w, int n, bool flag) : n(n), flag(flag) {
		weights = new float[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			weights[i] = w[i];
		}

	}
	~Neuron() {
		delete[] weights;
	}
	float calc(float* Ilyas) {
		float L = 0;
		for (int i = 0; i < n; i++)
		{
			L = L + weights[i + 1] * Ilyas[i];
		}
		L = L + weights[0];
		if (flag)
		{
			L = logit(L);
		}
		return L;
	}
	float logit(float B)
	{

		return 1.0 / (1.0 + exp(-B));
	}
};

int main()
{
	float w[3] = { 1.0, 2.0, 3.0 };
	Neuron Ilyas(w, 2, false);
	float A[2] = { 10.0, 20.0 };
	float B;
	B = Ilyas.calc(A);
	cout << B << endl;

	return 0;
}