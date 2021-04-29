#include <bits/stdc++.h>
using namespace std;

int FemaleCounter[7];
int MaleCounter[7];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		int S = 0, Y = 0;
		cin >> S >> Y;

		switch (S)
		{
		case 0:
			FemaleCounter[Y]++;
			break;
		case 1:
			MaleCounter[Y]++;
			break;
		}
	}

	int RoomCount = 0;
	for (int i = 1; i < 7; ++i)
	{
		RoomCount += (MaleCounter[i] / K) + ((MaleCounter[i] % K > 0) ? 1 : 0);
		RoomCount += (FemaleCounter[i] / K) + ((FemaleCounter[i] % K > 0) ? 1 : 0);
	}

	cout << RoomCount;
	return 0;
}
