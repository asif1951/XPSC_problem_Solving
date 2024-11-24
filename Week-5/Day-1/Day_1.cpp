//c
#include <bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,m;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1,s2;
        cin>>s>>s1>>s2;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s2[i]&&s1[i]!=s2[i])
                flag=1;
        }
        if(flag==1)
            yes;
        else
            no;
    }
}
//b
#include <iostream>
const int n = 200001;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,m;
    cin>>t;
    while(t--)
    {
        int n1;
        cin>>n1;
        int a[n]= {0};
        while(n1--)
        {
            cin>>m;
            cout<<char('a'+a[m]);
            a[m]++;
        }
        cout<<'\n';
    }
}

//a
#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        if(n%2!=0)
        {
            no;
        }
        else
        {
            yes;
            for(int i=1; i<=n/2; i++){
                if(i%2==0)
                    cout<<"BB";
                else
                    cout<<"AA";
            }
            cout<<endl;
        }
    }
}
