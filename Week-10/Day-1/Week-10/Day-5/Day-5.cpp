//G
/*#include <bits/stdc++.h>
#define ll long long
#define impossible cout << "IMPOSSIBLE" << endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++)
    {
        ll t = x - v[i].first;
        ll L = i + 1, R = n - 1;
        while (L < R)
        {
            ll sum = v[L].first + v[R].first;
            if (sum == t)
            {
                cout << v[i].second << " " << v[L].second << " " << v[R].second << endl;
                return 0;
            }
            else if (sum < t)
            {
                L++;
            }
            else
            {
                R--;
            }
        }
    }
    impossible;
}*/


//H
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    multiset<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        auto it = st.upper_bound(k);
        if (it != st.end())
        {
            st.erase(it);
        }
        st.insert(k);
    }
    ll len = st.size();
    cout << len << endl;
}*/

//J
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v[m] = i;
    }
    int a = 1;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] < v[i - 1])
        {
            a++;
        }
    }
    cout << a << endl;
}*/


//k
/*#include <bits/stdc++.h>
#define found  cout << x << " found at " << y << endl
#define notFound cout << x << " not found" << endl
#define case cout << "CASE# " << t << ":" << endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        t++;
        case;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end() && *it == x)
            {
                int y = it - v.begin() + 1;
                found;
            }
            else
            {
                notFound;
            }
        }
    }
}*/


//B
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll tot = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        tot += v[i];
    }
    ll result = INT_MAX;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll s1 = 0, s2 = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
                s1 += v[j];
        }
        s2 = abs(tot - s1);
        result = min(result, abs(s1 - s2));
    }
    cout << result << endl;
}*/





