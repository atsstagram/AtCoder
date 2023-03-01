#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{

    int H = 0, W = 0;
    cin >> H >> W;
    vector<string> S(H);
    for (int y = 0; y < H; y++)
        cin >> S.at(y);

    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < W; x++)
        {
            if ((S.at(y)).at(x) == '.')
            {
                int c = 0;
                for (int dx = -1; dx < 2; dx++)
                {
                    for (int dy = -1; dy < 2; dy++)
                    {
                        if (dx == 0 and dy == 0)
                            continue;
                        int xx = x + dx;
                        int yy = y + dy;
                        if (0 <= xx and xx < W and 0 <= yy and yy < H)
                        {
                            if ((S.at(yy)).at(xx) == '#')
                                c++;
                        }
                    }
                }
                (S.at(y)).at(x) = char('0' + c);
            }
        }
    }
    for (int y = 0; y < H; y++)
        cout << S.at(y) << endl;
}
