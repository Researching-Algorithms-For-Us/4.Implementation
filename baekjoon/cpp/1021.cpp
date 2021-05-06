#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    deque<int> deq;
    for (int i = 0; i < N; ++i)
    {
        deq.push_back(i + 1);
    }

    vector<int> outputseq;
    outputseq.resize(M);
    for (int i = 0; i < M; ++i)
    {
        cin >> outputseq[i];
    }

    int count = 0;
    int seqIndex = 0;
    while (seqIndex < outputseq.size())
    {
        if (outputseq[seqIndex] == deq.front())
        {
            deq.pop_front();
            ++seqIndex;
        }
        else 
        {
            auto iter = deq.begin();
            for (; *iter != outputseq[seqIndex]; ++iter);

            if (iter - deq.begin() > deq.end() - iter)
            {
                while (outputseq[seqIndex] != deq.front())
                {
                    int t = deq.back();
                    deq.pop_back();

                    deq.push_front(t);
                    count++;
                }
            }
            else
            {
                while (outputseq[seqIndex] != deq.front())
                {
                    int t = deq.front();
                    deq.pop_front();

                    deq.push_back(t);
                    count++;
                }
            }
            
        }

        
    }

    cout << count << "\n";

    return 0;
}
