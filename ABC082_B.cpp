#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N; // ひなあられの個数
    cin >> N;
    bool Y_in = false; // Yが入っているかどうか

    for (int i = 0; i < N; i++)
    {
        string color;
        cin >> color;

        if (color == "Y")
        {
            Y_in = true;
            cout << "Four" << endl;
            break;
        }
    }

    if (!(Y_in))
        cout << "Three" << endl;
}