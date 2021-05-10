#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int TestCase = 0;
	cin >> TestCase;

	while (TestCase--)
	{
		bool Array[101][101]{ 0 };
		int N, M;
		cin >> N >> M;

		for (int i = 0; i < N; ++i)
		{
			int T;
			cin >> T;

			for (int j = 0; j < T; j++)
			{
				Array[i][j] = 1;
			}
		}

		// 시계방향 회전
		for (int x = M - 1; x >= 0; x--)
		{
			int fulled_height = 0;
			for (int y = N - 1; y >= 0; y--)
			{
				if (Array[y][x])
				{
					fulled_height++;
					Array[y][x] = 0;
				}
			}

			for (int y = N - 1; y >= 0; y--)
			{	
				if (fulled_height == 0)
					break;

				if (fulled_height > 0)
				{
					Array[y][x] = 1;
					fulled_height--;
				}
			}

		}

		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; j++)
			{
				cout << Array[i][j];
			}
			cout << "\n";
		}
	}


	return 0;
}