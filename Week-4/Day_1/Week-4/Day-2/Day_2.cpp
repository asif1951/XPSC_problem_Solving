//1
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int l=0,r=0,s=0;
    ll sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            s=max(s,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<s<<'\n';
}

//F
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int m, n, o, x;
        cin>>m>>n>>o;
        int s=m-1;
        if(n<o)
            x=abs(n-o)+o-1;
        else
            x=n-1;
        if(s==x)
        {
            cout<<3<<endl;
        }
        else if(s<x)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}


//G
#include <bits/stdc++.h>
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
        string s;
        cin>>s;
        string s2;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                int m=s[i-1]-'0';
                i--;
                int m1=s[i-1]-'0';
                i--;
                int as=(m1*10)+m;
                char ch=as+96;
                s2.push_back(ch);
            }
            else
            {
                int n=s[i]-'0';
                char ch=n+96;
                s2.push_back(ch);
            }
        }
        reverse(s2.begin(), s2.end());
        cout<<s2<<endl;
    }
}*/


#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        char ch;
        cin>>a>>ch>>b;
        if(ch=='<'){
            if(a<b)
                cout<<a<<ch<<b<<endl;
            else
                cout<<b<<"<"<<b+1<<endl;
        }
        if(ch=='>'){
            if(a>b)
                cout<<a<<ch<<b<<endl;
            else
                cout<<b+1<<ch<<b<<endl;
        }
        if(ch=='='){
            if(a==b)
                cout<<a<<ch<<b<<endl;
            else
                cout<<b<<"<"<<b+1<<endl;
        }
    }
}
