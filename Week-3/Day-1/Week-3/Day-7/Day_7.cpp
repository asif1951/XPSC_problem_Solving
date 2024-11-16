//10
class Solution
{
public:
    int search(string pat, string txt)
    {
        vector<int>v(256,0);
        vector<int>v1(256,0);
        int as=0,ass=0;
        int val;
        for(int i=0; i<pat.size(); i++)
        {
            v[pat[i]]++;
            v1[txt[i]]++;
        }
        int s=0;
        if(v==v1)
            s++;
        int i=0,j=pat.size();
        while(j<txt.size())
        {
            v1[txt[j]]++;
            v1[txt[i]]--;
            if(v==v1)
                s++;
            i++;
            j++;
        }
        return s;
    }
};

//j
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
        int x, y;
        cin >> x >> y;
        vector<vector<int>> v(x, vector<int>(y));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<ll> v1(x + y - 1, 0);
        vector<ll> v2(x + y - 1, 0);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                v1[i - j + y - 1] += v[i][j];
                v2[i + j] += v[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                ll sum1 = v1[i - j + y - 1] + v2[i + j] - v[i][j];
                sum = max(sum, sum1);
            }
        }
        cout << sum << endl;
    }
}


//G
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int l = 0, r = 0, s = 100, m = 150, la = 200;
        if (s1[s1.size() - 1] == s2[s2.size() - 1])
        {
            if (s1[s1.size() - 1] == 'S')
            {
                for (int i = s1.size() - 1; i >= 0; i--)
                {
                    if (s1[i] == 'S')
                    {
                        l= s;
                    }
                    else
                    {
                        l -= 1;
                    }
                }
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    if (s2[i] == 'S')
                    {
                        r = s;
                    }
                    else
                    {
                        r -= 1;
                    }
                }
                if (l < r)
                {
                    cout << "<"<<endl;
                }
                else if (l == r)
                {
                    cout << "="<<endl;
                }
                else if(l>r)
                {
                    cout << ">"<<endl;
                }
            }
            else
            {
                for (int i = s1.size() - 1; i >= 0; i--)
                {
                    if (s1[i] == 'L')
                    {
                        l = la;
                    }
                    else
                    {
                        l += 1;
                    }
                }
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    if (s2[i] == 'L')
                    {
                        r = la;
                    }
                    else
                    {
                        r += 1;
                    }
                }
                if (l < r)
                {
                    cout << "<"<<endl;
                }
                else if (l == r)
                {
                    cout << "="<<endl;
                }
                else
                {
                    cout << ">"<<endl;
                }
            }
        }
        else
        {
            if (s1[s1.size() - 1] == 'L')
            {
                l += la;
            }
            else if (s1[s1.size() - 1] == 'M')
            {
                l += m;
            }
            else if (s1[s1.size() - 1] == 'S')
            {
                l += s;
            }
            if (s2[s2.size() - 1] == 'L')
            {
                r += la;
            }
            else if (s2[s2.size() - 1] == 'M')
            {
                r += m;
            }
            else if (s2[s2.size() - 1] == 'S')
            {
                r += s;
            }
            if (l < r)
            {
                cout << "<"<<endl;
            }
            else if (l == r)
            {
                cout << "="<<endl;
            }
            else
            {
                cout << ">"<<endl;
            }
        }
    }
}
