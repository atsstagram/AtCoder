#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N = 0, M = 0;

    cin >> N;
    vector<string> si(N);
    for (int i = 0; i < N; i++)
    {
        cin >> si.at(i);
    }

    cin >> M;
    vector<string> ti(M);
    for (int i = 0; i < M; i++)
    {
        cin >> ti.at(i);
    }

    // 数える
    vector<int> count(N);
    for (int j = 0; j < N; j++)
    {
        // 青いカード
        for (int k = 0; k < N; k++)
        {
            if (si.at(j) == si.at(k))
                count.at(j)++;
        }
        // 赤いカード
        for (int k = 0; k < M; k++)
        {
            if (si.at(j) == ti.at(k))
                count.at(j)--;
        }
    }

    sort(count.begin(), count.end());
    if (count.at(N - 1) < 0)
        cout << 0; // マイナスなら0円
    else
        cout << count.at(N - 1) << endl;
}