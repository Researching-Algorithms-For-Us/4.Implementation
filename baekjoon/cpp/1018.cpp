#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
string whiteFirst[8] = {
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" }
};

string blackFirst[8] = {
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" },
		{ "BWBWBWBW" },
		{ "WBWBWBWB" }
};


char chessmap[51][51];

int wpatternCount(int y, int x)
{
	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (whiteFirst[i][j] != chessmap[y + i][x + j])
				count++;
		}
	}

	return count;
}

int bpatternCount(int y, int x)
{
	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (blackFirst[i][j] != chessmap[y + i][x + j])
				count++;
		}
	}

	return count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> chessmap[i][j];
		}
	}

	int count = INT_MAX;
	for (int i = 0; i <= n - 8; ++i)
	{
		for (int j = 0; j <= m - 8; ++j)
		{
			count = std::min(count, std::min(wpatternCount(i, j), bpatternCount(i, j)));
		}
	}


	cout << count << "\n";

	return 0;
}
