//D
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    cin >> x >> y;
    vector<ll> v(x);
    for (ll i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    map<ll, ll> m;
    ll count = 0;
    m[sum] = 1;
    for (ll i = 0; i < x; i++)
    {
        sum += v[i];
        count += m[sum - y];
        m[sum]++;
    }
    cout << count << endl;
}*/


// e
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
        ll count = 0;
        unordered_map<ll, ll> m;
        m[0] = 1;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            int x = ((sum % n) + n) % n;
            if (m.find(x) != m.end())
            {
                count += m[x];
            }
            m[x]++;
        }
        cout<< count << endl;
}
