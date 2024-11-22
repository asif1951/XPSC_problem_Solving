//9
#include<bits/stdc++.h>
#define ll long long
const int d=10;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+d];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        a[0]=0;
        for(int i=1; i<=n; i++)
        {
            a[i]=a[i]+a[i-1];
        }
        int l=n;
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                int flag=0;
                for(int j=l-1; j>i; j--)
                {
                    if(s[j]=='R')
                    {
                        l=j;
                        flag=1;
                        break;
                    }
                    else
                    {
                        l--;
                    }
                }
                if(flag==1)
                {

                    ans+=a[l+1]-a[i];
                }
            }
        }
        cout<<ans<<endl;
    }
}
//8
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin>> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll crnt = a[0], ans = 0, i = 0, j = 1;
        if(crnt <= k)
            ans = 1;
        while(j < n)
        {
            if(b[j-1] % b[j] == 0)
            {
                crnt += a[j];
            }
            else
            {
                crnt = a[j];
                i = j;
            }
            while(crnt > k)
            {
                crnt -= a[i++];

            }
            ans = max(ans, j-i+1);
            j++;
        }
        cout << ans << '\n';
    }
}

//7
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
        int n, n1;
        cin >> n >> n1;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i=0; i < v.size(); i++)
        {
            sum += v[i];
        }
        if (sum < n1)
        {
            cout << -1 << '\n';
            continue;
        }
        int ini = 0, sum1 = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += v[i];
            while (sum1 > n1)
            {
                sum1 -= v[ini];
                ini++;
            }
            if (sum1 == n1)
            {
                l = max(l, i - ini + 1);
            }
        }
        cout << (n - l) << '\n';
    }
}
