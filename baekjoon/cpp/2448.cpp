#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
bool DepthPattern[][3] = {
    {0,1,0},
    {1,0,1}
};
bool PrintPattern[][5] = {
    {0,0,1,0,0},
    {0,1,0,1,0},
    {1,1,1,1,1}
};

char buffer[3100][6200] {' '};
void SetBuffer(int Y, int X)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (PrintPattern[i][j])
			{
				buffer[i + Y][j + X] = '*';
			}
		}
	}
}

void Recursive(int n, int Y, int X)
{
	if (n == 3)
	{
		SetBuffer(Y, X);
		return;
	}

	Recursive(n / 2, Y, X + (n/2));
	
	X += (n/2);
	Recursive(n / 2, Y + (n / 2), X - (n / 2));
	Recursive(n / 2, Y + (n / 2), X + (n / 2));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	memset(buffer, ' ', sizeof(char) * 3100 * 6200);
    int n;
    cin >> n;

	Recursive(n, 0, 0);


	for (int Y = 0; Y < n; Y++)
	{
		for (int X = 0; X < (n * 2)-1; X++)
		{
			cout << buffer[Y][X];
		}

		if(Y != n -1)
			cout << "\n";
	}
    return 0;
}
