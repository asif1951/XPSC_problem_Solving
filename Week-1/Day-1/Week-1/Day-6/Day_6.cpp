//13
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int ma;
    for(auto ii:mp){
        //cout<<ii.first<<"->"<<ii.second<<endl;
        v1.push_back(ii.second);
    }
    for(int i=0;i<v1.size();i++){
        ma=*max_element(v1.begin(),v1.end());
    }
    cout<<ma<<endl;
}


//8
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    map<string,string>mp;
    for(int i=0;i<a;i++){
        string s1,s2;
        cin>>s1>>s2;
        mp[s2]=s1;
    }
    for(int i=0;i<b;i++){
        string s1,s2;
        cin>>s1>>s2;
        s2.pop_back();
        cout<<s1<<" "<<s2<<"; #"<<mp[s2]<<endl;
    }
}


//10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,bool>mp;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(mp[s]){
            cout <<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        mp[s] = true;
    }
}
