#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)

		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)

		S += a[i];

	return S;
}

int main()
{
	const int n = 8;
	int a[n];
	int Low = -4;
	int High = 4;

	Create(a, n, Low, High);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;

	return 0;
}


