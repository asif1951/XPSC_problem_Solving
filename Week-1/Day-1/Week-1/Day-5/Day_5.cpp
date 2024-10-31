//Topicwise
//7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string s;
    map<string,int>mp;
    for(int i=0;i<t;i++){
        cin>>s;
        if(mp[s]==0){
            mp[s]=1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
}


//6
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      vector<int> v,v1;
      vector<bool> as(s.size()+2,true);
      for(int i=0;i<s.size();i++){
         if(s[i]=='b'){
            if(!v1.empty()){
               as[v1.back()]=false;
               v1.pop_back();
            }
            as[i]=false;
         }
         else if(s[i]=='B'){
            if(!v.empty()){
               as[v.back()]=false;
               v.pop_back();
            }
            as[i]=false;
         }
         else if(s[i]>='A' and s[i]<='Z'){
            v.push_back(i);
         }
         else{
            v1.push_back(i);
         }
      }
      for(int i=0;i<s.size();i++){
         if(as[i]){
            cout<<s[i];
         }
      }
      cout<<endl;
   }
}


//Week 1
//G
/*#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i <= s; i++) {
        for (int j = 0; j <= s - i; j++) {
            for (int k = 0; k <= s - i - j; k++) {
                if (i * j * k <= t) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}*/
