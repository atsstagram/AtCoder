#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }

    int sum = 0;
    for (int j = 0; j < N; j++)
    {
        sum += vec.at(j);
    }
    int ave = sum / N; // 小数点以下切り捨て

    for (int k = 0; k < N; k++)
    {
        cout << abs(vec.at(k) - ave) << endl;
    }
}
