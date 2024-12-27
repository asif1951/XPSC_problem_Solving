//10
/*#include <bits/stdc++.h>
#define ll long long
const int N = 200010;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll ma = 0, arr[N], sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ma = max(ma, arr[i]);
    }
    ll as = 0;
    for (int i = 1; i <= n; i++){
        as = __gcd(as, ma - arr[i]);
        sum += ma - arr[i];
    }
    cout << sum / as << " " << as;
}*/


//7
/*#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl
using namespace std;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    cin>>x>>y;
    yes;
    for(ll i=x; i<=y; i=i+2)
        cout<<i<<" "<<i+1<<endl;
}*/


//6
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
int power(int x, int n)
{
    int ans = 1%mod;
    while(n){
        if(n&1){
            ans=(1LL*ans%mod*x%mod)%mod;
        }
        x=1LL*x*x%mod;
        n>>=1;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x, n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    }
}
