// I
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll a[n];
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!a[i])
            {
                count++;
            }
        }
        ll finl = 0, x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            if (!a[i])
            {
                count--;
                x = max(x, count - y);
            }
            else
            {
                finl += count;
                x = max(x, y - count);
                y++;
            }
        }
        finl += x;
        cout << finl << endl;
    }
}*/

// j
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
        string s;
        cin >> s;
        int count = 0, count1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count++;
            else
                count1++;
        }
        int count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count1--;
            else
                count--;
            if (count < 0 || count1 < 0)
                break;
            count2++;
        }
        cout << s.size() - count2 << endl;
    }
}*/

// N
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            if (s == "RRRRRRRR")
            {
                flag = 1;
            }
        }
        if (flag == 1)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
}*/


#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        vector<ll>arr(n+1);
        int count=0;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i + 1] == 0)
            {
                count = -1;
                break;
            }
            while (arr[i] >= arr[i + 1])
                arr[i] /= 2, count++;
        }
        cout << count << "\n";
    }
}
