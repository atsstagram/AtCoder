#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // input
    vector<int> dia(N);
    for (int i = 0; i < N; i++)
        cin >> dia.at(i);

    sort(dia.begin(), dia.end());

    // calculation
    int counter = 1;
    for (int i = 0; i < N - 1; i++)
    {
        if (dia.at(i) == dia.at(i + 1))
            continue;
        counter++;
    }

    // output
    cout << counter << endl;
}
