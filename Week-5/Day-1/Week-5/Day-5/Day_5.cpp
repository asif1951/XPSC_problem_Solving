//L
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
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
        }
        cout<<sum-2*v[n-2]<<endl;
    }
}*/


//g
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
        ll n;
        string s,rev;
        cin>>n>>s;
        rev = s;
        reverse(rev.begin(),rev.end());
        cout<<min(s,rev+s)<<endl;
    }
}*/

//h
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int n1 = 2600;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n1];
        int count=1;
        for(int i=1; i<=n*n; i+=2)
        {
            a[i]=count;
            count++;
        }
        count=n*n;
        for(int i=2; i<=n*n; i+=2)
        {
            a[i]=count;
            count--;
        }
        for(int i=1; i<=n; i++)
        {
            if(i%2)
                for(int j=1; j<=n; j++)
                    cout<<a[(i-1)*n+j]<<" ";
            else
                for(int j=n; j>=1; j--)
                    cout<<a[(i-1)*n+j]<<" ";
            cout<<endl;
        }
    }
}
