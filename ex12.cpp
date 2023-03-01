#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // ここにプログラムを追記
    int N = S.size(); // 文字列の長さを取得
    int cal = 1;
    for (int i = 1; i < N; i += 2)
    {
        if (S.at(i) == '+')
            cal += 1;
        else if (S.at(i) == '-')
            cal -= 1;
    }

    cout << cal << endl;
}
