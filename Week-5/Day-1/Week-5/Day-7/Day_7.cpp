//3
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
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int x=0;
        for(int i=0; i<n; i++)
        {
            x^=v[i];
        }
        for(int i=0; i<n; i++)
        {
            v[i]^=x;
        }
        int y=0;
        for(int i=0; i<n; i++)
        {
            y^=v[i];
        }
        if(y==0)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}*/


//5
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<n-1<<" "<<n<<endl;
    }
}*/


//6
#include <bits/stdc++.h>
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
        int a,b;
        cin>>a>>b;
        if((b%2==1 && a%2==0)||(b<a))
            no;
        else
        {
            yes;
            if(a%2==1)
            {
                for(int i=0; i<=a-2; i++)
                    cout<<1<<" ";
                cout<<b-(a-1)<<endl;
            }
            else if(a%2==0 && b%2==0)
            {
                for(int i=0; i<=a-3; i++)
                {
                    cout<<1<<" ";
                }
                cout<<(b-(a-2))/2<<" "<<(b-(a-2))/2<<endl;
            }
        }
    }
}
