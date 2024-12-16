//C
/*#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
        int v[n];
        int v1[n];
        int ma=0;
        bool flag=1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            ma = max(ma, v[i] - v1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] - ma < v1[i] && v1[i] != 0)
                flag = 0;
        }
        if (flag)
            yes;
        else
            no;
    }
}*/


//E
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i%4<2)
            cout<<"a";
        else
            cout<<"b";
    }
}*/


//K
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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int m=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>=v[(i-1+n)%n])
                m++;
        }
        if(m>=n-1)
            yes;
        else
            no;
    }
}*/


//F
#include<bits/stdc++.h>
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
        int flag=0,f=-1,l=-1,x;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(flag==1)
            {
                if(x>=l && x<=f)
                {
                    l=x;
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            else
            {
                if(f==-1)
                {
                    f=x;
                    l=x;
                }
                if(x>=l)
                {
                    l=x;
                    cout<<1;
                }
                else if(f>=x)
                {
                    l=x;
                    cout<<1;
                    flag=1;
                }
                else
                {
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
}
