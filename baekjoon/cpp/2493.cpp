#include <bits/stdc++.h>
using namespace std;
/*
	시간초과 -> failed

	https://github.com/hotehrud/acmicpc/blob/master/algorithm/stack/2493.java  로 풀었음.
	https://mygumi.tistory.com/101

	Why can't i solve it?
		 나같은 경우 무식하게 옆으로 쭉 검사해서 찾았음. O(n^2)

		 https://mygumi.tistory.com/101 참조하여 풀었음 (코드복붙수준...)
		 1. 현재 탑은 가장 가까이 있는 좌측 탑부터 비교한다.
		 2. 현재 탑보다 큰 높이는 가진 탑을 수신한다.


		 아래의 경우 O(N)정도가 나오는 것 처럼 보이는데, 스택의 top을 이용해서 풀어내야 된다고 함.
		 스택 자체는 이해 했지만, 스택의 top의 성질을 활용해서 푸는 능력이 부족하다.
		
*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	stack<uint64_t> root;
	stack<int> index;
	vector<int> ans;

	uint64_t f;
	cin >> f;

	root.push(f);
	index.push(1);
	ans.push_back(0);

	for (int i = 2; i <= N; ++i)
	{
		cin >> f;

		while (!root.empty())
		{
			if (f < root.top())
			{
				ans.push_back(index.top());
				break;
			}

			root.pop();
			index.pop();
		}

		if (root.empty())
		{
			ans.push_back(0);
		}

		root.push(f);
		index.push(i);
	}

	for (auto c : ans)
	{
		cout << c << " ";
	}


	return 0;
}
