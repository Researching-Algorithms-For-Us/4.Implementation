#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	set<string> duplicheck;
	vector<string> str;

	for (int i = 0; i < n; ++i)
	{
		string s;

		cin >> s;
		if (duplicheck.find(s) == duplicheck.end())
		{
			duplicheck.insert(s);
			str.push_back(s);
		}
	}

	sort(str.begin(), str.end(), [](const string& a, const string& b)
		{
			if (a.length() == b.length())
			{
				return a.compare(b) < 0;  // a가 b보다 사전순으로 앞일 때
			}
			else
			{
				return a.length() < b.length();  // 오름차순
			}
		});
	
	for (auto s : str)
	{
		cout << s << "\n";
	}

	return 0;
}