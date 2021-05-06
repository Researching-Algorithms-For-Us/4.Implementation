#define _CRT_SECURE_NO_WARNINGS
/*
     반례에 실패함.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    stack<int> s;
    /*
    * // 내 코드...
    string str;
    cin >> str;

    stack<int> stack;  // cause1
    int paircount = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        char c = str[i];

        if (c == '(' || c == '[')
        {
            paircount++;
            stack.push(c);
        }
        else if(c == ')')
        {
            int value = 0;
            bool find = false;

            while (!stack.empty())
            {
                char t = stack.top();
                stack.pop();
                if (t == '(')
                {
                    paircount--;
                    find = true;
                    stack.push(std::max(value, 1) * 2);
                    break;
                }
                else
                {
                    value += t;
                }
            }

            if (!find)
            {
                cout << "0\n";
                return 0;
            }


        }
        else if (c == ']')
        {
            int value = 0;
            bool find = false;

            while (!stack.empty())
            {
                char t = stack.top();
                stack.pop();
                if (t == '[')
                {
                    paircount--;
                    find = true;
                    stack.push(std::max(value, 1) * 3);
                    break;
                }
                else
                {
                    value += t;
                }
            }

            if (!find)
            {
                cout << "0\n";
                return 0;
            }
        }
    }

    if (paircount != 0)
    {
        cout << "0\n";
        return 0;
    }

    int count = 0;
    while (!stack.empty())
    {
        char c = stack.top();
        count += c; // cause 3
        stack.pop();
    }
    cout << count << "\n";
    */


    cin >> str;

    int answer = 0, temp = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            temp *= 2;
            s.push('(');
        }
        else if (str[i] == '[') {
            temp *= 3;
            s.push('[');
        }
        else if (str[i] == ')') {
            if (s.empty() || s.top() != '(') {   //올바르지 못한 괄호열
                answer = 0;
                break;
            }
            if (str[i - 1] == '(') {
                answer += temp;
                temp /= 2;
                s.pop();
            }
            else {
                temp /= 2;
                s.pop();
            }
        }
        else if (str[i] == ']') {
            if (s.empty() || s.top() != '[') {   //올바르지 못한 괄호열
                answer = 0;
                break;
            }
            if (str[i - 1] == '[') {
                answer += temp;
                temp /= 3;
                s.pop();
            }
            else {
                temp /= 3;
                s.pop();
            }
        }
    }

    if (!s.empty()) answer = 0;  //올바르지 못한 괄호열

    cout << answer << "\n";


    return 0;
}
