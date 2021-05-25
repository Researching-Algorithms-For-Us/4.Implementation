#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int CountingArray[10001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int t;
		cin >> t;
		
		CountingArray[t]++;
	}

	for (int i = 0; i <= 10000; i++)
	{
		for (int j = 0; j < CountingArray[i]; ++j)
		{
			cout << i << "\n";
		}
	}
	

	return 0;
}
