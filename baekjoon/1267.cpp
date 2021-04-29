#include <bits/stdc++.h>
using namespace std;
int MoneyCal(vector<uint32_t>& Call, uint32_t Cost, uint32_t Delta)
{
	int TotalCost = 0;

	for (int Time : Call)
	{
		int Q = Time / Delta + 1;   // 틀린 이유 : 0초의 경우에도 기본요금처리를 해야됬었음.

		TotalCost += Q * Cost;
	}

	return TotalCost;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<uint32_t> CallTime;
	CallTime.resize(N);

	for (int i = 0; i < N; ++i)
		cin >> CallTime[i];

	uint32_t YMoney = MoneyCal(CallTime, 10, 30);
	uint32_t MMoney = MoneyCal(CallTime, 15, 60);

	if (YMoney == MMoney)
	{
		cout << "Y M " << YMoney;
	}
	else if (YMoney > MMoney)
	{
		cout << "M " << MMoney;
	}
	else
		cout << "Y " << YMoney;


	return 0;
}