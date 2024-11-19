//A
/*#include<bits/stdc++.h>
#define rcb cout<<"RCB"<<endl
#define csk cout<<"CSK"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(x-y>=18)
        rcb;
    else
        csk;
}


//B
#include<bits/stdc++.h>
//#define rcb cout<<"RCB"<<endl
//#define csk cout<<"CSK"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    int div1,div2;
    div1=x/3;
    div2=y/3;
    if(x%3==0||y%3==0){
        cout<<0<<endl;
    }
    else{
        if(x-(3*div1)==y-(3*div2)){
            cout<<x-(3*div1)<<endl;
        }
        else{
            cout<<abs((x-(3*div1))-(y-(3*div2)))<<endl;
        }
    }

    }
}


//C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0, count1 = 0;
        char as = s[0];
        if (as == '0')
            count++;
        else
            count1++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != as)
            {
                if (s[i] == '0')
                    count++;
                else
                    count1++;
                as = s[i];
            }
        }
        cout << min(count, count1) << endl;
    }
}*/


//Decode string
/*#include <bits/stdc++.h>
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
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,s=0,sum=0;
    multiset<ll>m;
    while(r<n)
    {
        m.insert(v[r]);
        ll mn=*m.begin(), mx=*m.rbegin();
        if(mx-mn<=k)
        {
            s+=r-l+1;
        }
        else
        {
            while(l<=r)
            {
                ll mn=*m.begin(), mx=*m.rbegin();
                if(mx-mn<=k)
                {
                    break;
                }
                m.erase(m.find(v[l]));
                l++;
            }
            ll mn=*m.begin(), mx=*m.rbegin();
            if(mx-mn<=k)
            {
                s+=r-l+1;
            }
        }
        r++;
    }
    cout<<s<<'\n';
}
