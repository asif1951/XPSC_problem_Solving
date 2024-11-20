//D
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
    while(t--){
        ll a,b,n,d;
        cin>>a>>b>>n>>d;
        ll as=d%n;
        if(as<=b && a*n+b>=d)
            yes;
        else
            no;
    }
}

//E
#include<bits/stdc++.h>
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
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>v(c);
        for(int i=0; i<c; i++)
        {
            cin>>v[i];
        }
        ll sum=0;
        if(b>=a)
        {
            sum=a;
            b=a;
        }
        else
        {
            sum=b;
        }
        for(int i=0; i<c; i++)
        {
            if(v[i]+1<=a)
                sum+=v[i];
            else
                sum+=a-1;
        }
        cout<<sum<<'\n';
    }
}

//H
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        ll sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(sum+v[i]>c)
                break;
            sum+=v[i];
            ans++;
        }
        cout<<ans<<'\n';
    }
}
