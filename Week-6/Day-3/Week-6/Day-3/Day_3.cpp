//C
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
        int n,m;
        cin>>n>>m;
        int sub = m-n;
        if(n<m)
            no;
        else{
            if(sub%2==0)
                yes;
            else
                no;
        }
    }
}
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
        int n;
        cin>>n;
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            ans=__gcd(ans,abs(x-i));
        }
        cout<<ans<<endl;
    }
}
//B
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
        cout<<max((b+1)/2,(4*b+a+14)/15)<<endl;
    }
}
//A
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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int m=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>=a[(i-1+n)%n])
                m++;
        }
        if(m>=n-1)
            yes;
        else
            no;
    }
}
