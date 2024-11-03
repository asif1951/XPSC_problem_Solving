//Week 2
//A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]==x)
            continue;
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


//B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin >>s1>>s2;
    int n=s1.size();
    int count = 0;
    for (int i=0;i<n;i++){
        if (s1[i]!=s2[i]){
            count++;
        }
    }
    cout <<count<<endl;
}


//C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
}
