#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int a[], const int n, int i)
{
	cout << "a[i] = "; cin >> a[i];
	if (i < n - 1)
		Create(a, n, i + 1);
}
void Print(int *a, const int n, int i)
{
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;
}
int Sum(int *a, const int n, int i)
{
	if (i < n)
	{
		if (a[i] > 0)
			return a[i] + Sum(a, n, i + 1);
		else
			return Sum(a, n, i + 1);
	}
	else
		return 0;
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];


	Create(a, n, 0);
	Print(a, n, 0);

	cout << "S = " << Sum(a, n, 0) << endl;

	return 0;
}