//WEEK 3
//A
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    double win,loss,sum,sub,win1;
    win=((x*1)+(0.5*y));
    loss=(0.5*y)+z;
    sum=x+y+z;
    sub=4-sum;
    win1=win+(sub*1);
    //cout<<win<<" "<<loss<<" "<<win1<<endl;
    if(sub==0){
        if(win>loss){
            yes;
        }
        else{
            no;
        }
    }
    else if(sub!=0){
        if(win1>loss){
            yes;
        }
        else{
            no;
        }
    }
}


//B
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
        cin >> n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll>v1=v;
        ll as = LLONG_MAX;
        v1.pop_back();
        v1.pop_back();
        as = min(v1.back()-v1.front(), as);
        v1= v;
        as = min(v1.back()-v1[2], as);
        as = min(v1[n-2] - v1[1], as);
        cout << as << endl;
    }
    return 0;
}


//F
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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=n-1; i>=0; i--)
        {
            if(mp[v[i]]==0)
                count++;
            else
                break;
            mp[v[i]]++;
        }
        cout<<n-count<<'\n';
    }
}
