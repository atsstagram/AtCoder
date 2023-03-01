#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // input
    vector<int> cards(N);
    for (int i = 0; i < N; i++)
        cin >> cards.at(i);
    sort(cards.begin(), cards.end());

    // calculation of each score
    int sumA = 0, sumB = 0;
    for (int i = 0; i < N; i++)
    {
        // 昇順ソートした配列の末尾から
        if (i % 2 == 0)
            sumA += cards.at(N - 1 - i);
        else if (i % 2 == 1)
            sumB += cards.at(N - 1 - i);
    }

    cout << sumA - sumB << endl;
}
