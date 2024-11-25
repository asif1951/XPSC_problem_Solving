//D
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
        int a,b;
        cin>>a>>b;
        for(int i=a-b; i<=a; i++)
        {
            cout<<i<<" ";
        }
        for(int i=a-b-1; i>=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//E
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int count=0, count1=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0)
                count++;
            else
                count1++;
        }
        int ans = 0;
        if(count == 0)
        {
            ans = 0;
        }
        else
        {
            if(count1>=count-1)
            {
                ans=0;
            }
            else
            {
                int ma=*max_element(v.begin(), v.end());
                if(ma==1)
                    ans=2;
                else
                    ans=1;
            }
        }
        cout<<ans<<endl;
    }
}


//F
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, count, s=1,a;
        cin>>n;
        count = n/2 + n%2;
        a=3*n;
        cout<<count<<endl;
        for(ll i = 0; i<count; i++)
        {
            cout<<s<<" "<<a<<endl;
            s+=3;
            a-=3;
        }
    }
}
