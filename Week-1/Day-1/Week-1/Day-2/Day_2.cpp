//Week-1:
//D
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    if(s.size()==4){
        cout<<s<<endl;
    }
    else if(s.size()==3){
        cout<<"0"<<s<<endl;
    }
    else if(s.size()==2){
        cout<<"00"<<s<<endl;
    }
    else if(s.size()==1){
        cout<<"000"<<s<<endl;
    }
    return 0;
}*/


//Week-1|Topicwise|STL-1
//Problem-3

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<pair<string,string>,bool>mp;
    for(int i=0;i<n;i++){
        string s,s1;
        cin>>s>>s1;
        mp[{s,s1}]=true;
    }
    cout<<mp.size()<<endl;
}*/

//Problem-2
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
        string s;
        cin>>s;
        int firstP=-1,lastP=-1;
        firstP=s.find('B');
        lastP=s.rfind('B');
        //cout<<firstP<<" "<<lastP<<endl;
        cout<<lastP-firstP+1<<endl;

    }
}

