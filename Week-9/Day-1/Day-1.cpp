//U
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
        int n;
        cin >> n;
        int count[n], count1[n], z[n];
        for (int i = 0; i < n; i++)
        {
            cin >> count[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> count1[i];
            z[i] = count1[i] - count[i];
        }
        sort(z, z + n);
        int count1 = 0, count2 = n - 1, count = 0;
        while (count1 < count2)
        {
            if (z[count1] + z[count2] >= 0)
            {
                count++;
                count1++;
                count2--;
            }
            else
                count1++;
        }
        cout << count << endl;
    }
}*/

// R
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                count--;
            else if (s[i] == 'E')
                count++;
            else if (s[i] == 'N')
                count1--;
            else if (s[i] == 'S')
                count1++;
        }
        if (abs(count) % 2 != 0 || abs(count1) % 2 != 0)
            cout << "NO" << endl;
        else if (n == 2 && count == 0 && count1 == 0)
            cout << "NO" << endl;
        else
        {
            int n = 0, as = 0, x = 1, y = 1;
            char ch[2] = {'R', 'H'};
            string s2 = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'N')
                    s2 += ch[n], n = 1 - n;
                else if (s[i] == 'S')
                    s2 += ch[as], as = 1 - as;
                else if (s[i] == 'E')
                    s2 += ch[x], x = 1 - x;
                else
                    s2 += ch[y], y = 1 - y;
            }
            cout << s2 << endl;
        }
    }
}*/

// D
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
        int n;
        string s;
        cin >> n >> s;
        int ma = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            int a = 0, b = n - 1, answer = 0;
            while (a <= b)
            {
                if (s[a] == s[b]){
                    a++;
                    b--;
                }
                else if (s[a] != s[b] && s[a] == 'a' + i){
                    a++;
                    answer++;
                }
                else if (s[a] != s[b] && s[b] == 'a' + i){
                    b--;
                    answer++;
                }
                else
                {
                    answer = INT_MAX;
                    break;
                }
            }
            ma = min(ma, answer);
        }
        if (ma == INT_MAX)
            cout << -1 << endl;
        else
            cout << ma << endl;
    }
}*/

// WEEK-9
// A
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            cout << v[n / 2] << endl;
            break;
        }
    }
}*/
