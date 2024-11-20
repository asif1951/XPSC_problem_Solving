//10
/*class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int n=s.size(),l=0,r=0,sa=-1;
    map<char,int>m;
    while(r<n){
        m[s[r]]++;
        if(m.size()==k){
            sa=max(sa,r-l+1);
        }
        else{
            while(m.size()>k&&l<=r){
                m[s[l]]--;
                if(m[s[l]]==0){
                    m.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    return sa;
    }
};class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int n=s.size(),l=0,r=0,sa=-1;
    map<char,int>m;
    while(r<n){
        m[s[r]]++;
        if(m.size()==k){
            sa=max(sa,r-l+1);
        }
        else{
            while(m.size()>k&&l<=r){
                m[s[l]]--;
                if(m[s[l]]==0){
                    m.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
    return sa;
    }
};


//6
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,s=0,sum=0;
    multiset<ll>m;
    while(r<n)
    {
        m.insert(v[r]);
        ll mn=*m.begin(), mx=*m.rbegin();
        if(mx-mn<=k)
        {
            s+=r-l+1;
        }
        else
        {
            while(l<=r)
            {
                ll mn=*m.begin(), mx=*m.rbegin();
                if(mx-mn<=k)
                {
                    break;
                }
                m.erase(m.find(v[l]));
                l++;
            }
            ll mn=*m.begin(), mx=*m.rbegin();
            if(mx-mn<=k)
            {
                s+=r-l+1;
            }
        }
        r++;
    }
    cout<<s<<'\n';
}

//3
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    ll sum=0,s=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            s+=(r-l+1);
        }
        else
        {
            while(sum>k && l<=r)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=k)
            {
                s+=(r-l+1);
            }
        }
        r++;
    }
    cout<<s<<'\n';
}*/


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

