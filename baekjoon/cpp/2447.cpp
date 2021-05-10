#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int Pattern[][3] = {
	{1, 1, 1},
	{1, 0, 1},
	{1, 1, 1}
};
void Print(int Y, int X, int N, vector<vector<char>>& Output)
{
	if (N == 3)
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (Pattern[i][j])
				{
					Output[Y + i][X + j] = '*';
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (Pattern[i][j])
				{
					Print(Y + (i * N/3), X + (j * N/3), N/3, Output);
				}
			}
		}
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<vector<char>> Output;
	Output.resize(N + 1);

	for (int i = 0; i < N; ++i)
	{
		Output[i].resize(N + 1);
	}
	
	Print(0, 0, N, Output);


	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (Output[i][j] == '*')
				cout << "*";
			else
				cout << " ";
		}

		if(i < N-1)
			cout << "\n";
	}
	return 0;
}