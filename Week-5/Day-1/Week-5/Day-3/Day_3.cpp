//k
#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        vector<ll>v(b);
        for(ll i=0; i<b; i++)
        {
            cin>>v[i];
        }
        if(b==1)
        {
            yes;
        }
        else
        {
            vector<ll>v1(a);
            ll j=a-1;
            for(ll i=b-1; i>=1; i--)
            {
                v1[j]=v[i]-v[i-1];
                j--;
            }
            while(j>0)
            {
                v1[j]=v1[j+1];
                v[0]-=v1[j];
                j--;
            }
            v1[0]+=v[0];
            if(is_sorted(v1.begin(),v1.end()))
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
}

//j
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>f(26,0);
        for(char ch : s)
            f[ch - 'a']++;
        while(n!=0)
        {
            for(int i=0; i<26; i++)
            {
                if(f[i]!=0)
                {
                    cout<<(char)(i+'a')<<"";
                    f[i]--;
                    n--;
                }
            }
        }
        cout<<endl;
    }
}
//i
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
        int n;
        cin>>n;
        vector<ll> v(n+1);
        ll ma=0,count=0,count1=0;
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
            if(v[i]%2)
                ma=max(ma,v[i]);
        }
        if(ma==0)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin()+1,v.begin()+1+n);
        for(int i=1; i<=n; i++)
        {
            if(v[i]%2)
                continue;
            count1++;
            if(v[i]>ma)
            {
                count+=2;
                ma+=v[i];
            }
            else
            {
                ma+=v[i];
                count++;
            }
        }
        cout<<min(count,count1+1)<<endl;
    }
}
