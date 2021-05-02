#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int solve = 0;

    for (int hour = 0; hour <= N; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            for (int second = 0; second < 60; ++second)
            {
                if (to_string(hour).find("3") != string::npos)
                {
                    solve++;
                }

                else if (to_string(minute).find("3") != string::npos)
                {
                    solve++;
                }

                else if (to_string(second).find("3") != string::npos)
                {
                    solve++;
                }
            }
        }
    }
   
    cout << solve << endl;

    return 0;
}
