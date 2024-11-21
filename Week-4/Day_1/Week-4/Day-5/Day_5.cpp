//2
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll n1;
    cin >> n >> n1;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0,sum=0;
    ll mi = INT_MAX;
    for (int r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= n1)
        {
            mi = min(mi, r - l + 1);
            sum -= v[l];
            l++;
        }
    }
    if (mi == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << mi << '\n';
    }
}

//4
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, n1;
    cin >> n >> n1;
    vector< ll > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, sum = 0, count = 0, r;
    for (r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= n1)
        {
            count += (n - r);
            sum -= v[l];
            l++;
        }
    }
    cout << count << endl;
}

//5
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, n1;
    cin >> n >> n1;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<ll, ll> m;
    ll l = 0, count = 0, count1 = 0;
    for (int r = 0; r < n; r++)
    {
        if (m[v[r]] == 0)
        {
            count1++;
        }
        m[v[r]]++;
        while (count1 > n1)
        {
            m[v[l]]--;
            if (m[v[l]] == 0)
            {
                count1--;
            }
            l++;
        }
        count += (r - l + 1);
    }
    cout << count << '\n';
}
