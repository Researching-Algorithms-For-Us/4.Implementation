#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    queue<int> q;

    for (int i = 0; i < N; ++i)
    {
        q.push(i + 1);
    }

    while (q.size() > 1)
    {
        q.pop();

        int t = q.front();
        q.pop();
        q.push(t);
    }

    cout << q.front() << "\n";

    return 0;
}