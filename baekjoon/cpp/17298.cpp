#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	stack<int> Insertion;
	stack<int> Temp;
	stack<int> ansStack;

	for (int i = 0; i < N; ++i)
	{
		int t = 0;
		cin >> t;

		Insertion.push(t);
	}

	while (!Insertion.empty())
	{
		int t = Insertion.top();
		Insertion.pop();

		/*
			임시 스택이 존재하면서, 현재 값이 임시 스택의 top보다 크거나 같은동안 임시 스택을 pop한다.
			오른쪽 수 (임시 스택의 top)는 왼쪽 수보다 커야하기 때문이다.
		*/
		while (!Temp.empty() && Temp.top() <= t)
		{
			Temp.pop();
		}

		if (Temp.empty())  // 만약 임시 스택이 비어있으면 정답 스택에 -1을 쌓는다.
		{
			ansStack.push(-1);
		}
		else  // 만약 임시 스택의 값이 있으면, 임시 스택의 top 값을 정답 스택에 push한다.
		{
			ansStack.push(Temp.top());
		}

		Temp.push(t);
	}


	while (!ansStack.empty())
	{
		int t = ansStack.top();
		ansStack.pop();

		cout << t << " ";
	}

	return 0;
}
