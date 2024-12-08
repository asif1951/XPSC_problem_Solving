//1
/*#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    bool ok = false;
    for(int mask=0; mask<(1<<n); mask++)
    {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if((mask>>i) & 1)
            {
                sum+=v[i];
            }
            else
            {
                sum-=v[i];
            }
        }
        if(sum%360==0)
        {
            ok=true;
            break;
        }
    }
    if(ok)
        yes;
    else
        no;
}*/

//2
/*#include<bits/stdc++.h>
#define ll long long
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
        deque<ll>dq;
        for(int i=0; i<=__lg(n); i++)
        {
            if((n>>i) & 1)
            {
                ll val = n-(1LL<<i);
                if(val>0)
                {
                    dq.push_front(val);
                }
            }
        }
        dq.push_back(n);
        cout<<dq.size()<<endl;
        for(auto val : dq)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
}*/


#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int as=0;
        for(int j=30; j>=0; j--)
        {
            int b=0;
            for(int i=1; i<=n; i++)
                if(((a[i]>>j)&1)==0)
                    b++;
            if(k>=b)
            {
                as+=(1<<j);
                k-=b;
            }
        }
        cout<<as<<endl;
    }
}
