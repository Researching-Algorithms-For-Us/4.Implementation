#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string planeText;
	getline(cin, planeText);

	stack<char> s;
	queue<char> q;
	bool bracket = false;

	string answer;
	for (auto c : planeText)
	{
		if (!bracket && c == ' ')
		{
			while (!s.empty())
			{
				char t = s.top();
				s.pop();
				answer.push_back(t);
			}
			answer.push_back(' ');
			continue;
		}

		if (c == '<')
		{
			bracket = true;

			while (!s.empty())
			{
				char t = s.top();
				s.pop();
				answer.push_back(t);
			}
		}
		else if (c == '>')
		{
			q.push(c);
			bracket = false;

			while (!q.empty())
			{
				char t = q.front();
				q.pop();
				answer.push_back(t);
			}
			continue;
		}

		if (bracket)
			q.push(c);
		else
			s.push(c);
	}

	while (!s.empty())
	{
		char t = s.top();
		s.pop();
		answer.push_back(t);
	}
	
	cout << answer << "\n";

	return 0;
}
