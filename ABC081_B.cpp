#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int A;

    int global_counter = 30; // 大域的最大操作回数, 2^30>10^9
    for (int i = 0; i < N; i++)
    {
        // int A;
        cin >> A;

        int local_counter = 0; // 局所的最大可能操作数

        for (int j = 2; A % j == 0; j *= 2)
            local_counter++;

        if (global_counter > local_counter)
            global_counter = local_counter;
    }
    cout << global_counter << endl;
}