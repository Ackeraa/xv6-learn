#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x;
	double h = 0;
	for (int i = 1; i <= 9; i++)
	{
		cin >> x;
		h += x * log(x) / log(2);
	}
	cout << -h << endl;
}
