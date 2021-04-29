#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int Ypos;
	Ypos = 0; 
	int StartX, EndX;
	StartX = EndX = N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 1; j <= EndX; ++j)
		{
			if (j < StartX)
			{
				cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}

		StartX--;
		EndX++;

		if (i != N - 1)
			cout << '\n';
	}

	return 0;
}
