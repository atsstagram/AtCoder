#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    // ここにプログラムを追記
    int i = 0; // counter for A
    int j = 0; // counter for B

    cout << "A:";
    while (i < A)
    {
        cout << "]";
        i++;
    }
    cout << endl;

    cout << "B:";
    while (j < B)
    {
        cout << "]";
        j++;
    }
    cout << endl;
}
