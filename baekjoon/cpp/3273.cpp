#include <bits/stdc++.h>
using namespace std;
bool PairSumFlag[2000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> insert;
	insert.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> insert[i];
	}
	int X;
	cin >> X;

	for (auto num : insert)
	{
		PairSumFlag[num] = 1;
	}

	int PairCount = 0;
	for (int i = 0; i<insert.size(); ++i)
	{
		int num = insert[i];
		// 틀린 이유, 영역 검사 -> 좀더 설계후 개발하자.
		if (num >= X || num == X - num)  // 여기 조건
			continue;

		if (PairSumFlag[num] == 1 && PairSumFlag[X - num] == 1)  // 여기 조건
		{
			PairSumFlag[X - num] = PairSumFlag[num] = 0;

			PairCount++;
		}
	}

	cout << PairCount << "\n";


	return 0;
}
