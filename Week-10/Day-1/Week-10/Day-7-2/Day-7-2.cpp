
//7
/*#include <bits/stdc++.h>
using namespace std;
const int x = 1000010;
int a[x];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int t, b=1;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        while (t--){
            a[b] = i;
            b++;
        }
    }
    int t1;
    cin >> t1;
    while (t1--)
    {
        cin >> t;
        cout << a[t] << endl;
    }
}*/



//5
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    sort(v.begin(), v.end());
    vector<int> v1(x);
    for (int i = 0; i < x; i++)
    {
        int a, b;
        cin >> a >> b;
        auto l = lower_bound(v.begin(), v.end(), a);
        auto u = upper_bound(v.begin(), v.end(), b);
        int c = u - l;
        v1[i] = c;
    }
    for (int i = 0; i < x; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}*/

//8
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


//9
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
