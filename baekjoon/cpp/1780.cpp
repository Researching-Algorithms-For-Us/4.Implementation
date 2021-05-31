#include <bits/stdc++.h>
using namespace std;

int cell[2200][2200];
int m, z, o;

bool CellCheck(int startY, int startX, int endY, int endX)
{
	int cell_value = cell[startY][startX];

	for (int i = startY; i < endY; ++i)
	{
		for (int j = startX; j < endX; ++j)
		{
			if (i == startY && j == startX)
				continue;

			if (cell[i][j] != cell_value)
			{
				return false;
			}
		}
	}

	return true;
}

void CountingCell(int startY, int startX, int endY, int endX)
{
	if (CellCheck(startY, startX, endY, endX))
	{
		switch (cell[startY][startX])
		{
		case -1:
			m++;
			break;
		case 0:
			z++;
			break;
		case 1:
			o++;
			break;
		}
		return;
	}

	int length = abs(startY - endY) / 3;

	CountingCell(startY, startX, 
				 startY + length, startX + length);
	CountingCell(startY, startX + length, 
				 startY + length, startX + 2 * length);
	CountingCell(startY, startX + 2 * length, 
				 startY + length, startX + 3 * length);

	CountingCell(startY + length, startX, 
				 startY + 2 * length, startX + length);
	CountingCell(startY + length, startX + length, 
				 startY + 2 * length, startX + 2 * length);
	CountingCell(startY + length, startX + 2 * length, 
				 startY + 2 * length, startX + 3 * length);

	CountingCell(startY + 2 * length, startX, 
				 startY + 3 * length, startX + length);
	CountingCell(startY + 2 * length, startX + length, 
				 startY + 3 * length, startX + 2 * length);
	CountingCell(startY + 2 * length, startX + 2 * length, 
				 startY + 3 * length, startX + 3 * length);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);


	int N;
	cin >> N;


	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> cell[i][j];
		}
	}

	CountingCell(0, 0, N, N);

	cout << m << "\n" << z << "\n" << o << "\n";

	return 0;
}
