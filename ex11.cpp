#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    cin >> N >> A;

    // ここにプログラムを追記

    for (int i = 0; i < N; i++)
    {
        // 演算子と数字の取得
        string op;
        int B;
        cin >> op >> B;

        // 演算
        if (op == "+")
        {
            A += B;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "-")
        {
            A -= B;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "*")
        {
            A *= B;
            cout << i + 1 << ":" << A << endl;
        }
        else if (op == "/")
        {
            if (B == 0)
            {
                cout << "error" << endl;
                break;
            }
            A /= B;
            cout << i + 1 << ":" << A << endl;
        }
    }
}
