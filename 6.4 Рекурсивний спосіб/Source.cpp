#include <iostream>
using namespace std;
void Input(int* a, const int size, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];

	if (i < size - 1)
		Input(a, size, i + 1);
	else
		cout << endl;
}
int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}int Sum(int* a, const int size, int i, int S)
{
	S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}

int main()
{
	const int n = 5;
	int a[n];
	Input(a, n, 0);
	cout << "max = " << Max(a, n, 1, a[0]) << endl;
	cout << "S = " << Sum(a, n, 0,0) << endl;
	return 0;
}