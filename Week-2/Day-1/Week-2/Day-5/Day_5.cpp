//6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int>s;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            //s.insert(a[i]);
        }
        for(int i=1;i<=n;i++){
            s.insert(i);
        }
        int l=1,r=n;
        int flag;
        while(1){
        int mn=*s.begin();
        int mx=*s.rbegin();
        int flag=0;
            if(mn==a[l] || mx==a[l]){
                s.erase(a[l]);
            l++;
            flag=1;
            }
            if(mx==a[r] || mn==a[r]){
                s.erase(a[r]);
                r--;
                flag=1;
            }
            if(flag==0||l>r){
                break;
            }
        }
        if(l>r)
            cout<<"-1"<<endl;
        else
            cout<<l<<" "<<r<<endl;
    }
}


//9
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
        cout<<sum<<endl;
    }
}
