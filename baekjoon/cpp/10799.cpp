#include <bits/stdc++.h>
using namespace std;
/*  
    사실상 실패
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string beforepipes;
    cin >> beforepipes;

    stack<char> stack;
    int result = 0;
    for (int i=0; i<beforepipes.length(); ++i)
    {
        char c = beforepipes[i];

        if (c == '(')
            stack.push(c);
        else
        {
            stack.pop();
            if (beforepipes[i - 1] == '(')
                result += stack.size();  // 레이저의 경우
            else
                result++;  
        }
    }

    cout << result << "\n";

    return 0;
}
