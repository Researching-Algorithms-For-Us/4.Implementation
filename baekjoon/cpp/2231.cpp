#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i= 1; i < N; ++i)
    {
        string t = to_string(i);
        int sum = i;
        for (auto c : t)
        {
            sum += c - '0';
        }

        if (sum == N)
        {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";

    return 0;
}
