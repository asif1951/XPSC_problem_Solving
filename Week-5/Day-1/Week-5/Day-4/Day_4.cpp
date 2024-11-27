//m
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a= 0,ma=0;
        cin>>n;
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            m[a]++;
            ma=max(ma,m[a]);
        }
        m.erase(m.begin(),m.end());
        a=n-ma;
        while(ma<n){
            a++;
            ma*=2;
        }
        cout<<a<<endl;
    }
}*/

//n
/*#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="()")
            no;
        else
        {
            yes;
            if(s[0]==s[1]||s[2]==s[1])
            {
                for(int i=1; i<=s.size(); i++)
                    cout<<"()";
            }
            else
            {
                for(int i=1; i<=s.size(); i++)
                    cout<<"(";
                for(int i=1; i<=s.size(); i++)
                    cout<<")";
            }
        }
        cout<<endl;
    }
}*/

//o
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int ans=1,count=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(i-count<=k)
                    ans--;
                count=i;
            }
            else if(i-count>k)
            {
                count=i;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}*/
