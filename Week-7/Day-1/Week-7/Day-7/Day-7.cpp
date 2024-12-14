//6
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, k, c = 0;
    int arr[10005];
    cin >> a >> b >> k;
    for (int i = 0; i < b + 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        int x = arr[b] ^ arr[i];
        int count = 0;
        while (x > 0)
        {
            count += x & 1;
            x >>= 1;
        }
        if (count <= k)
        {
            c++;
        }
    }
    cout << c;
}*/

//7
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int c = 0, d = 0, e = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            c++;
        if (s1[i] == '-')
            c--;
        if (s2[i] == '+')
            d++;
        if (s2[i] == '-')
            d--;
        if (s2[i] == '?')
            e++;
    }
    int tar = c - d;
    int as = 0;
    for (int i = 0; i < (1 << e); i++)
    {
        int co = 0;
        for (int j = 0; j < e; j++)
        {
            if (i & (1 << j))
                co++;
            else
                co--;
        }
        if (co == tar)
            as++;
    }
    double as1 = pow(2, e);
    cout << fixed << setprecision(12) << as / as1;
}*/


//9
/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=n,count=0;
        while(a>1)
        {
            a=a/2;
            count++;
        }
        ll p=pow(2,count);
        cout<<n-p<<" "<<p<<endl;
    }
}*/


//10
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int b = __lg(x), count = 0, count1 = 0;
        bool flag = false;
        for (int i = b; i >= 0; i--)
        {
            if ((x >> i) & 1)
            {
                count++;
            }
            else
            {
                if(flag)
                    count1++;
            }
            if (count == 2)
                flag = true;
        }
        cout << (1 << count1) << endl;
    }
}*/


//NASA
/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int B = (1LL << 15);
vector<int> v1;
bool as(int x)
{
    string s1=to_string(x);
    int len = s1.size();
    for(int i=0; i<len/2; i++)
    {
        if(s1[i]!=s1[len-i-1])
        {
            return false;
        }
    }
    return true;
}
void as1()
{
    for(int i=0; i<B; i++)
    {
        if(as(i))
        {
            v1.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    as1();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n),cnt(B+1);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v1.size(); j++)
            {
                int cur=(v[i]^v1[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<endl;
    }
}*/
