//A
/*#include <bits/stdc++.h>
#define noSolv cout<<"NO SOLUTION"<<endl
using namespace std;
const int n = 1e6 + 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    string str1 = "";
    map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
    }
    if (m.size() == 1)
    {
        cout << str << '\n';
        return 0;
    }
    int count = 0;
    for (auto &val : m)
    {
        if ((val.second % 2) != 0)
            count++;
    }
    if (count > 1)
    {
        noSolv;
    }
    else if (count <= 1)
    {
        char ch = '*';
        for (auto &val : m)
        {
            for (int i = 0; i < val.second / 2; i++)
            {
                str1.push_back(val.first);
            }
            if (val.second % 2)
            {
                ch = val.first;
            }
        }
        for (auto val1 : str1)
        {
            cout << val1;
        }
        if (ch != '*')
            cout << ch;
        reverse(str1.begin(), str1.end());
        for (auto val1 : str1)
        {
            cout << val1;
        }
    }
}*/


//C
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



//30 tarikh
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

