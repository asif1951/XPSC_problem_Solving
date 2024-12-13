//13
/*#include <bits/stdc++.h>
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
        ll a,count=0,count1=0;
        map<ll,ll>m;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            count1=log2(a);
            count+=m[count1];
            m[count1]++;
        }
        cout<<count<<endl;
    }
}*/


//12
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ma=max(0,a-b);
        int sum=a+b;
        while(ma<sum) {
            ma|=(ma+1);
        }
        cout << ma << endl;
    }
}*/


//11
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
        ll a[n],s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s|=a[i];
        }
        cout<<s<<endl;
    }
}*/


//8
#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum=0,x=1;
    while(n)
    {
        if(n%10==4)
            sum+=x;
        else
            sum+=2*x;
        x*=2;
        n/=10;
    }
    cout<<sum;
}

