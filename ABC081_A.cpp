#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    cout << i / 100            // 100の位
                + i % 100 / 10 // 10の位
                + i % 10       // 1の位
         << endl;
}