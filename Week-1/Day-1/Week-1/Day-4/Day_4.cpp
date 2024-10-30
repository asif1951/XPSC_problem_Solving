// Week 1 | Topicwise | STL - 1
//4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,string>ans,has;
    for(int i=1;i<=n;i++){
        string s1,s2;
        cin>>s1>>s2;
        if(has.find(s1)!=has.end()){
            string s3=has[s1];
            ans[s3]=s2;
            has.erase(s1);
            has[s2]=s3;
        }
        else{
            ans[s1]=s2;
            has[s2]=s1;
        }
        }
        cout<<ans.size()<<endl;
        for(auto [a,b]:ans){
            cout<<a<<" "<<b<<endl;
    }
}


//5.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m=3;
        cin>>n;
        map<string,vector<int>>mp;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        /*for(auto [x,y]:mp){
            cout<<x<<"->";
            for(auto val:y){
                cout<<val<<" ";
            }
            cout<<"\n";
        }*/
        vector<int>ans(m+1);
        for(auto [x,y]:mp){
            vector<int>v=y;
            if(v.size()==1){
                ans[v[0]]+=3;
            }
            if(v.size()==2){
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for(int i=1;i<=m;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}



//Week 1
//H.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll>v(n);
    deque<ll>dq;
    ll Sum=0;
    for (int i=0;i<n;++i){
        cin>>v[i];
        Sum+=v[i];
        if(v[i]%2!=0) {
            //cout<<v[i]<<" ";
            dq.push_back(v[i]);
        }
    }
    ll mi;
    mi=*min_element(dq.begin(),dq.end());
    if(Sum%2==0){
        cout<<Sum<<endl;
    }else{
        cout<<Sum-mi<<endl;
    }
}

