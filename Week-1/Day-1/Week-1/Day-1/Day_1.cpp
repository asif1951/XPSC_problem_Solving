//Week-1:
//A.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a>b){
        cout<<"0"<<endl;
    }
    else if(a<b){
        for(int i=a;i<=b;i++){
            count++;
        }
        cout<<count<<endl;
    }
}*/


//B.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    vector<int>v;
    for(int i=a;i<=b;i++){
        if(i%c==0)
           //cout<<i<<endl;
           v.push_back(i);
    }
    if(v.size()==0)
        cout<<"-1"<<endl;
    else
        cout<<v[0]<<endl;
}*/


//C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int sum,sum1,sum2;
    sum=a+(a-1);
    sum1=b+(b-1);
    sum2=a+b;
    cout<<max({sum,sum1,sum2})<<endl;
}

