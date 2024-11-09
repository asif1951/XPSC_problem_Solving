//5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int c=1;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            s.insert({c,money});
            ml.insert({money,-c});
            c++;
        }
        else if(type==2){
            int pos=s.begin()->first, money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else{
            int pos= -ml.rbegin()->second, money=ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }
    for(auto val : ans){
        cout<<val<<" ";
    }
    cout<<'\n';
}



//13
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        set<int>st;
        for(int i=0;i<b;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        int ind=0;
        for(auto it : st){
            s[it-1]=s2[ind];
            ind++;
        }
        cout<<s<<endl;
    }
}


//7
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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string s;
    cin>>s;
    map<int,int>m,mp;
    for(int i=0;i<n;i++){
       if(s[i]=='0')
            mp[v[i]]=i;
       else
        m[v[i]]=i;
    }
    int sum=1;
    for(auto val : mp){
        v[val.second]=sum++;
    }
    for(auto val : m){
        v[val.second]=sum++;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    }
}
