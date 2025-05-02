// Date: 30-04-2025 at 22:18 BST
// Link: https://codeforces.com/problemset/problem/1997/A
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
/******************* author: @MullaRohan *****************/
void print(char ch)
{
    if (ch == 'a')
        cout << 'z';
    else
        cout << 'a';
}
void solve()
{
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (i && flag)
        {
            if (s[i] == s[i - 1])
            {
                print(s[i]);
                flag = false;
            }
        }
        cout << s[i];
    }
    if (flag || s.size() == 1)
    {
        print(s.back());
    }
    cout << nl;
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