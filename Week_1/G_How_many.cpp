// Date: 17-04-2025 at 20:34 BST
// Link:
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            for (int k = 0; k <= a; k++)
            {
                if ((i + j + k) <= a && (i * j * k) <= b)
                    cnt++;
            }
        }
    }
    cout << cnt << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}