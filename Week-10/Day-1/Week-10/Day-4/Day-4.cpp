//Random - F
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    int x = 0, y = 0;
    ll count = 0, count1 = 0;
    map<ll, ll> m;
    while (y < a)
    {
        m[v[y]]++;
        if (m.size() <= b)
        {
            count1 += y - x + 1;
        }
        else if (m.size() > b)
        {
            while (m.size() > b && x <= y)
            {
                m[v[x]]--;
                if (m[v[x]] == 0)
                {
                    m.erase(v[x]);
                }
                x++;
            }
            count1 += y - x + 1;
        }
        y++;
    }
    cout << count1 << endl;
}*/


//TopicWise- B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < b; i++)
    {
        int x, L = 0, R = a - 1, answer = -1, Mid;
        cin >> x;
        while (L <= R)
        {
            Mid = (L + R) / 2;
            if (x >= v[Mid])
            {
                answer = Mid;
                L = Mid + 1;
            }
            else
            {
                R = Mid - 1;
            }
        }
        cout << answer + 1 << endl;
    }
}
