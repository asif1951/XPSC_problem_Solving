//10
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int n = 2e5 + 10;
int v[n];
ll v1[n];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        {
            ll n1, n2;
            cin >> n1 >> n2;
            ll x;
            for (int i = 1; i <= n1; ++i)
            {
                cin >> x;
                v[i] = max(v[i - 1], int(x));
                v1[i] = v1[i - 1] + x;
            }
            while (n2--)
            {
                cin >> x;
                cout << v1[upper_bound(v + 1, v + n1 + 1, x) - v - 1] << " ";
            }
            cout << endl;
        }
    }
}*/


//I
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m = 0, n = 0, a = 0;
    cin >> m >> n;
    set<int> st;
    multiset<int> mst;
    st.insert(0);
    st.insert(m);
    mst.insert(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        auto it = st.upper_bound(a);
        auto it1 = it;
        it1--;
        mst.erase(mst.find(*it - *it1));
        mst.insert(*it - a);
        mst.insert(a - *it1);
        st.insert(a);
        cout << *mst.rbegin() << " ";
    }
}*/


//L
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    int t;
    cin >> t;
    vector<int> v1(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < t; i++)
    {
        int k = v1[i];
        int a = 0, b = 0, c = x-1, d= x-1, e=-1, f=x, g, h;
        while (a <= c)
        {
            g = a + (c - a) / 2;
            if (k > v[g])
            {
                e = g;
                a = g + 1;
            }
            else
            {
                c = g - 1;
            }
        }
        if (e == -1)
            cout << "X" << " ";
        else
            cout << v[e] << " ";
        while (b <= d)
        {
            h = b + (d - b) / 2;
            if (k < v[h])
            {
                f = h;
                d = h - 1;
            }
            else
            {
                b = h + 1;
            }
        }
        if (f == x)
            cout << "X" << endl;
        else
            cout << v[f] << endl;
    }
}*/


//6
#include <bits/stdc++.h>
using namespace std;
const int m = 100010;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int q;
    cin >> q;
    int x;
    while (q--)
    {
        cin >> x;
        cout << upper_bound(a, a + n, x) - a << endl;
    }
}
