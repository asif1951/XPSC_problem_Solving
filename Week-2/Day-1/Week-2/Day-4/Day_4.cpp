//3
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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<int>pq;
        for(auto ii:mp)
        {
            pq.push(ii.second);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            int a,b;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            a--;
            b--;
            if(a>=1)
            {
                pq.push(a);
            }
            if(b>=1)
            {
                pq.push(b);
            }
        }
        int ans=0;
        while(!pq.empty())
        {
            ans=ans+pq.top();
            pq.pop();
        }
        cout<<ans<<'\n';
    }
}

//4
#include<bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        map<int,set<int>>mp;
        int m,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++){
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i=1;i<=n;i++){
            int l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end()||mp.find(r)==mp.end()){
                no;
            }
            else{
                int left,right;
                left=*mp[l].begin();
                right=*mp[r].rbegin();
                if(left<right){
                    yes;
                }
                else{
                    no;
                }
            }
        }
    }
}

//8
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
        ll n;
        cin>>n;
        int a[n];
        priority_queue<ll>pq;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                if(pq.empty())
                    continue;
                else
                    sum+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout<<sum<<'\n';
    }
}
