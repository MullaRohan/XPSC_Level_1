// Date: 29-04-2025 at 19:39 BST
// Link: https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void solve()
{
    string s, sk;
    cin >> s;
    int cntb = 0, cntB = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
            cntb++;
        else if (s[i] == 'B')
            cntB++;
        else
        {
            char x = s[i];
            if (x >= 'a' && x <= 'z')
            {
                if (cntb)
                    cntb--;
                else
                    sk.push_back(x);
            }
            if (x >= 'A' && x <= 'Z')
            {
                if (cntB)
                    cntB--;
                else
                    sk.push_back(x);
            }
        }
    }
    reverse(sk.begin(), sk.end());

    cout << sk << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}