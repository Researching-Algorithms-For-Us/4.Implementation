
/*
    틀린이유
        덱을 아예 뒤집어서 처리할려고 함 -> 시간초과
        switch문으로 command 분리-> break를 통해 루프가 끝나지않음.

*/
#include <bits/stdc++.h>
using namespace std;
void Replace(std::string& str, const std::string& from, const std::string& to)
{
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void Tokenize(const std::string& whiteSpace, std::string Input, std::vector<std::string>& tokens)
{
    char* ptr = const_cast<char*>(Input.c_str());
    const char* token;

    while (0 != (token = strtok(ptr, whiteSpace.c_str())))
    {
        tokens.push_back(token);
        ptr = nullptr;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int TestCase;
    cin >> TestCase;

    string command, arraystr;
    int length = 0;
    deque<int> queue;
    std::vector<std::string> token;
    bool isfailed = false;
    bool reverse = false;
    while (TestCase--)
    {
        isfailed = false;
        reverse = false;
        queue.clear();
        token.clear();
        command.clear(); 
        arraystr.clear();
        length = 0;

        cin >> command >> length >> arraystr;

        Replace(arraystr, "[", "");
        Replace(arraystr, "]", "");

        Tokenize(",", arraystr, token);

        for (auto tokenStr : token)
        {
            queue.push_back(stoi(tokenStr));
        }


        for (auto c : command)
        {
            if(c == 'R')
            {
                reverse = !reverse;
            }
            else 
            {
                if (queue.size() <= 0)
                {
                    isfailed = true;
                    cout << "error\n";
                    break;
                }
                
                if (reverse)
                {
                    queue.pop_back();
                }
                else
                {
                    queue.pop_front();
                }
            }
        }

        if (!isfailed)
        {
			string output;
			output.push_back('[');
			while (!queue.empty())
			{
				if (reverse)
				{
					output += to_string(queue.back());
					queue.pop_back();
				}
				else
				{
					output += to_string(queue.front());
					queue.pop_front();
				}

				if (!queue.empty())
					output.push_back(',');
			}
			output.push_back(']');
			cout << output << "\n";
        }
    }

    return 0;
}
