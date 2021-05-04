#include <bits/stdc++.h>
using namespace std;
/*

     1. 스택의 top에 위치한 빌딩의 높이가 i 번째 빌딩의 높이보다 작거나 같을 경우 i 번째 빌딩의 옥상을 볼 수 없으므로 스택의 top이 i 번째 빌딩의 높이보다 높을 때까지 pop을 해줍니다.

     2. 스택에 i 번째 빌딩의 높이를 push 해줍니다.

     3. i 번째 빌딩을 제외한 나머지 빌딩들이 i 번째 빌딩의 옥상을 볼 수 있으므로 결과에 (스택의 크기 - 1)을 더해줍니다.
     
     풀이 실패
     https://jaimemin.tistory.com/1363

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    queue<uint64_t> arr;
    uint64_t t;
    for (int i = 0; i < N; ++i)
    {
        cin >> t;
        arr.push(t);
    }

    uint64_t ans = 0;
    stack<uint64_t> s;
    s.push(arr.front());
    arr.pop();

    while (!arr.empty())
    {
        int h = arr.front();
        arr.pop();

        while(!s.empty() && s.top() <= h)
        {
            s.pop();
        }
        s.push(h);
        ans += s.size() - 1;
    }

    cout << ans << endl;

    return 0;
}
