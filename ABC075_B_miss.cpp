#include <bits/stdc++.h>
using namespace std;

int main()
{

    int H, W;
    cin >> H >> W;

    // 入力
    vector<string> Si(H);
    for (int i = 0; i < H; i++)
        cin >> Si.at(i);

    vector<int> count(H * W);
    int a = 0; //(i,j)成分を1行のベクトルで表示した時の示数
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if ((Si.at(i)).at(j) == '#') //(i,j)成分が'#'なら
            {
                a = i * W + j;
                if (i == 0)
                {
                    if (j == 0)
                    {
                        count.at(a + 1)++;
                        count.at(a + W)++;
                        count.at(a + 1 + W)++;
                    }
                    else if (j == W - 1)
                    {
                        count.at(a - 1)++;
                        count.at(a + W)++;
                        count.at(a - 1 + W)++;
                    }
                }
                else if (i == H - 1)
                {
                    if (j == 0)
                    {
                        count.at(a + 1)++;
                        count.at(a - W)++;
                        count.at(a + 1 - W)++;
                    }
                    else if (j == W - 1)
                    {
                        count.at(a - 1)++;
                        count.at(a - W)++;
                        count.at(a - 1 - W)++;
                    }
                }
                else
                {
                    count.at(a - 1 - W)++;
                    count.at(a - W)++;
                    count.at(a + 1 - W)++;
                    count.at(a - 1)++;
                    count.at(a + 1)++;
                    count.at(a - 1 + W)++;
                    count.at(a + W)++;
                    count.at(a + 1 + W)++;
                }
            }
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if ((Si.at(i)).at(j) == '.') //(i,j)成分が'.'なら
            {
                a = i * W + j;
                (Si.at(i)).at(j) = char('0' + a);
            }
        }
    }

    for (int i = 0; i < H; i++)
        cout << Si.at(i) << endl;
}
