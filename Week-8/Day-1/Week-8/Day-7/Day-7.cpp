// Q
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[200010];
        for (int i = 1; i <= x; i++)
        {
            cin >> arr[i];
        }
        if (arr[x] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int count = 0;
        for (int i = x; i >= 1; i--)
        {
            if (arr[i] == 1)
            {
                count++;
            }
            if (arr[i] == 1 && arr[i - 1] == 0)
            {
                cout << count << " ";
                count = 0;
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}*/

// T
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
        int x, y;
        cin >> x >> y;
        char arr[51][51];
        for (int i = 1; i <= x; i++)
            cin >> arr[i];
        for (int i = x; i >= 1; i--)
        {
            for (int j = 0; j < y; j++)
                if (arr[i][j] == '.')
                {
                    for (int k = i - 1; k >= 1; k--)
                        if (arr[k][j] == 'o')
                            break;
                        else if (arr[k][j] == '*')
                        {
                            arr[k][j] = '.';
                            arr[i][j] = '*';
                            break;
                        }
                }
        }
        for (int i = 1; i <= x; i++)
            cout << arr[i] << endl;
    }
}*/

//S
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, as = 0;
        cin >> n;
        map<string, int> m;
        map<char, int> m1, m2;
        while (n--)
        {
            string s;
            cin >> s;
            as += m1[s[0]] + m2[s[1]] - 2 * m[s];
            m1[s[0]]++, m2[s[1]]++, m[s]++;
        }
        cout << as << endl;
    }
}
