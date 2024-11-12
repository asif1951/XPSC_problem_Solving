//11
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll ans=0;
        ll count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]<=q)
            {
                count++;
                if(i==n-1 || v[i+1]>q)
                {
                    if(count>=k)
                    {
                        ll m=count-k+1LL;
                        ll n=(m*(m+1LL))/2LL;
                        ans+=n;
                    }
                    count=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}


//C
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
        ll a[n];
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]!=0)
                m[a[i]]++;
        }
        if(m.size()==1||m.size()==0)
            yes;
        else
            no;
    }
}


//E
#include<bits/stdc++.h>
#include<algorithm>
#define lll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>x(a),y(b);
        for(int i=0;i<a;i++){
            cin>>x[i];
        }
        for(int i=0;i<b;i++){
            cin>>y[i];
        }
        sort(x.begin(),x.end(),greater<int>());
        sort(y.begin(),y.end(),greater<int>());
        lll sum=0;
        for(int i=0;i<min(a,b);i++){
            sum+=min(1ll*y[i]*c,1ll*x[i]);
        }
        cout<<sum<<endl;
    }
}
