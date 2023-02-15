#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 0; // 回文数を数える
    int A, B;
    cin >> A >> B;
    for (int i = A; i <= B; i++)
    {
        // 5桁だから、10000の位と1の位、1000の位と10の位が同じになれば良い
        int n5, n4, n2, n1;
        n5 = i / 10000;
        n1 = i % 10;

        if (n5 == n1)
        {
            n4 = (i % 10000) / 1000; // n4=(i/1000)%10;
            n2 = (i % 100) / 10;     // n2=(i/10)%10;
            if (n4 == n2)
                counter++;
        }
    }
    cout << counter << endl;
}