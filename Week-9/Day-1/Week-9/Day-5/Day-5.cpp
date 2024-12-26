//12
/*#include <bits/stdc++.h>
#define ll long long
const int x=600005;
using namespace std;
int t, n, a[x];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll as = 1, sum = 0, sum1 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 1; i < n; i++)
        {
            sum1 += a[i];
            ll as1 = __gcd(sum - sum1, sum1);
            as = max(as, as1);
        }
        cout << as << endl;
    }
}*/


//16
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll a, b;
        while (k && x > 1)
        {
            b = y - (x % y);
            a = min(k, b);
            k -= a;
            x += a;
            while (!(x % y))
                x /= y;
        }
        if (x + k < y)
        {
            cout << x + k << endl;
        }
        else
        {
            ll as = x + k % (y - 1);
            cout << as << endl;
        }
    }
}*/


//8
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    for (ll i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0 && __gcd(n / i, i) == 1)
        {
            cout << i << " " << n / i << endl;
            break;
        }
    }
}*/
