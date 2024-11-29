//4
/*#include<bits/stdc++.h>
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
        ll a,b;
        cin>>a>>b;
        cout<<(a^b)<<endl;
    }
}*/


//1
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
        for(int i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/


//2
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
        int n, XOR=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }
        int ans = XOR;
        for(int i=0; i<n; i++)
        {
            int current = (XOR^v[i]);
            ans = min(ans, current);
        }
        cout<<ans<<endl;
    }
}

