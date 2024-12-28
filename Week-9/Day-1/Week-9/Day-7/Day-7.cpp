// E
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << endl;
        }
        else if (n == 3)
        {
            cout << 2 << endl;
        }
        else if (n == 4)
        {
            cout << 2 << endl;
        }
        else
        {
            ll s = 4, s1 = 2;
            while (s < n)
            {
                s1++;
                s++;
                s *= 2;
            }
            cout << s1 << endl;
        }
    }
}*/

// 11

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bool ok = false;
        for (int i = x; i <= y; i++)
        {
            for (int j = 2; j <= i / j; j++)
            {
                if (i % j == 0)
                {
                    cout << j << " " << i - j << endl;
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
        }
        if (!ok)
        {
            cout << -1 << endl;
        }
    }
}*/

// 14
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            m[x] = i;
        }
        int as = -1;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            for (auto it1 = m.begin(); it1 != m.end(); it1++)
            {
                if (__gcd(it->first, it1->first) == 1)
                {
                    as = max(as, it->second + it1->second);
                }
            }
        }
        cout << as << endl;
    }
}*/
