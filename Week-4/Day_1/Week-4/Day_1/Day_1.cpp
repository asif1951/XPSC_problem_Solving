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


/*#include<bits/stdc++.h>
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
}*/


/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        ll sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(sum+v[i]>c)
                break;
            sum+=v[i];
            ans++;
        }
        cout<<ans<<'\n';
    }
}*/


/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, n1;
    cin >> n >> n1;
    vector< ll > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, sum = 0, count = 0, r;
    for (r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= n1)
        {
            count += (n - r);
            sum -= v[l];
            l++;
        }
    }
    cout << count << endl;
}*/


/*#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, n1;
    cin >> n >> n1;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<ll, ll> m;
    ll l = 0, count = 0, count1 = 0;
    for (int r = 0; r < n; r++)
    {
        if (m[v[r]] == 0)
        {
            count1++;
        }
        m[v[r]]++;
        while (count1 > n1)
        {
            m[v[l]]--;
            if (m[v[l]] == 0)
            {
                count1--;
            }
            l++;
        }
        count += (r - l + 1);
    }
    cout << count << '\n';
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    vector<int>v1;
    while(n--){
        for(int i=0;i<m;i++){
           cin>>v[i];
        }
        for(int i=0;i<m;i++){
            v1.push_back(v[i]);
        }
        for(int i=v1.size()-1;i>=0;i--){
        cout<<v1[i]<<" ";
    }
    cout<<'\n';
    v1.clear();
    }
}*/


/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, n1;
        cin >> n >> n1;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i=0; i < v.size(); i++)
        {
            sum += v[i];
        }
        if (sum < n1)
        {
            cout << -1 << '\n';
            continue;
        }
        int ini = 0, sum1 = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += v[i];
            while (sum1 > n1)
            {
                sum1 -= v[ini];
                ini++;
            }
            if (sum1 == n1)
            {
                l = max(l, i - ini + 1);
            }
        }
        cout << (n - l) << '\n';
    }
}*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin>> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll b[n];
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        ll crnt = a[0], ans = 0, i = 0, j = 1;
        if(crnt <= k)
            ans = 1;
        while(j < n){
            if(b[j-1] % b[j] == 0) {
                crnt += a[j];
            }
            else {
                crnt = a[j];
                i = j;
            }
            while(crnt > k) {
                crnt -= a[i++];

            }
            ans = max(ans, j-i+1);
            j++;
        }
        cout << ans << '\n';
    }
}



