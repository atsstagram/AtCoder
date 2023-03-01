#include <bits/stdc++.h>
using namespace std;

// Padding
int main()
{
    int H = 0, W = 0;
    cin >> H >> W;

    vector<string> ai(H);
    for (int i = 0; i < H; i++)
    {
        cin >> ai.at(i);
    }

    // 1行目
    for (int j = 0; j < W + 2; j++)
    {
        cout << '#';
    }
    cout << endl;

    // 2~H+1行目
    for (int k = 0; k < H; k++)
    {
        cout << '#' << ai.at(k) << '#' << endl;
    }

    // H+2行目
    for (int j = 0; j < W + 2; j++)
    {
        cout << '#';
    }
    cout << endl;
}
