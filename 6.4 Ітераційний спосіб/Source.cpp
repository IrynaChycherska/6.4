#include <iostream>
using namespace std;
void Input(int* a, const int size) {
	for
		(int i = 0; i < size; i++)

	{
		cout << "a[" << i << "] = "
			;
		cin >> a[i];

	}
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		S += a[i];
	return S;
}
int main() {
	const int n = 5;
	int a[n];
	Input(a, n);
	cout << "max = " << Max(a, n) << endl;
	cout << "S = " << Sum(a, n) << endl;
	return 0;}