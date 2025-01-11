//A
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        vector<ll> arr(a);
        for (ll i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        for (ll i = 0; i < a; i++)
        {
            if (arr[i] >= arr[(i - 1 + a) % a])
                sum++;
        }
        if (sum >= a - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}*/


//D
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
        int n, x, y;
        cin >> n >> x >> y;
        int div = n / 2;
        int mod = n % 2;
        int mi = div * y + mod * x;
        if (y >= 2 * x)
            cout << (n * x) << endl;
        else
            cout << mi << endl;
    }
}*/


//E
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
        vector<int> ve(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ve[i];
            m[ve[i]]++;
        }
        int cnt = 0;
        for (auto val : m)
        {
            cnt += val.second / 3;
        }
        cout << cnt << endl;
    }
}*/


