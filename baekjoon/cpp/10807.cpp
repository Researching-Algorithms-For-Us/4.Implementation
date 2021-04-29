#include <bits/stdc++.h>
using namespace std;
int Counter[300];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	// 음의 정수, 양의 정수, 0 이 들어옴.  -100 <= v <= 100     v + 101  v = 0 -> 101  v = 10 -> 110 v = -50 -> 61
	
	int TestCase;
	cin >> TestCase;

	while (TestCase--)
	{
		int number;
		cin >> number;

		Counter[number + 101]++;
	}

	int v;
	cin >> v;

	cout << Counter[v + 101];

	return 0;
}
