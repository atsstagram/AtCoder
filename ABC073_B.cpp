#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 0; // 人数をカウント
    int N;           // 団体数
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int l = 0, r = 0;
        cin >> l >> r;
        counter += r - l + 1;
    }
    cout << counter << endl;
}