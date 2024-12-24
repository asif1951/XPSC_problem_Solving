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
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll g1=0, g2=0;
        for(int i=0; i<n; i+=2)
        {
            g1=__gcd(g1,v[i]);
        }
        for(int i=1; i<n; i+=2)
        {
            g2=__gcd(g2,v[i]);
        }
        ll ans=0;
        bool ok=true;
        for(int i=1; i<n; i+=2)
        {
            if(v[i]%g1==0)
            {
                ok=false;
            }
        }
        if(ok)
        {
            ans=g1;
        }
        else
        {
            ok=true;
            for(int i=0; i<n; i+=2)
            {
                if(v[i]%g2==0)
                {
                    ok=false;
                }
            }
            if(ok)
            {
                ans=g2;
            }
        }
        cout<<ans<<endl;
    }
}*/


//3
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll r,bl,mi,x;
    r=n/a;
    bl=n/b;
    x=n/(a*b/__gcd(a,b));
    cout<<r*p+bl*q-x*min(q,p)<<endl;
}*/
