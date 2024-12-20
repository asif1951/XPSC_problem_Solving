// O
/*#include <bits/stdc++.h>
#define ll long long
usingaamespace std;
intbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        lla;
        cin >>a;
        vector<ll>arr(n+1);
        int count=0;
        for (int i = 1; i <=a; i++)
            cin >> arr[i];
        for (int i =a - 1; i > 0; i--)
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
}*/

// p
/*#include <bits/stdc++.h>
#define ll long long
usingaamespace std;
intbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        lla;
        cin >>a;
        ll c1=0, c2=1, x;
        for (int i = 0; i <a; i++)
        {
            cin >> x;
            if (x == 1)
                c1++;
            if (x == 0)
                c2 *= 2;
        }
        cout << c1 * c2 << endl;
    }
}*/

// b
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
        int a, b;
        cin >> a >> b;
        int x, count = 0;
        for (int i = 1; i <= a; i++)
        {
            cin >> x;
            count += (i % b != x % b);
        }
        if (count > 2)
            cout << -1 << endl;
        else
            cout << count / 2 << endl;
    }
}*/
