//Week 2
//G
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto val:mp){
            if(val.second%2!=0)
                count++;
        }
        if(count-1<0)
            count=0;
        else count=count-1;
        if(k>=count&&k<=n){
            yes;
        }
        else{
            no;
        }
    }
}


//Week 2 | Topicwise | STL - 2
//1
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n+1),count(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    set<ll>s;
    for(int i=n;i>=1;i--){
        s.insert(a[i]);
        count[i]=s.size();
    }
    for(ll i=1;i<=m;i++){
        ll b;
        cin>>b;
        cout<<count[b]<<'\n';
    }
}

//2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    //vector<int>v(n);
    multiset<int>s;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int ans=0,count=1;
    while(!s.empty())
    {
        auto it = s.lower_bound(count);
        if(it!=s.end())
        {
            ans++;
            s.erase(it);
        }
        else
        {
            break;
        }
        count++;
    }
    cout<<ans<<endl;
}
