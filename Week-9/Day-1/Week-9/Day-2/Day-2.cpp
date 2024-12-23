//B
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
        string s;
        cin>>s;
        set<char>st;
        set<char>st1;
        int countA=0, countB=0, countC=0, countD=0, count_Q=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
                countA++;
            else if(s[i]=='B')
                countB++;
            else if(s[i]=='C')
                countC++;
            else if(s[i]=='D')
                countD++;
            else
                count_Q++;
        }
        int sumA=0, sumB=0, sumC=0, sumD=0;
        if(countA>=n)
        {
            sumA+=n;
        }
        else
        {
            sumA+=countA;
        }
        if(countB>=n)
        {
            sumB+=n;
        }
        else
        {
            sumB+=countB;
        }
        if(countC>=n)
        {
            sumC+=n;
        }
        else
        {
            sumC+=countC;
        }
        if(countD>=n)
        {
            sumD+=n;
        }
        else
        {
            sumD+=countD;
        }
        //cout<<countB<<endl;
        //cout<<sumA<<" "<<sumB<<" "<<sumC<<" "<<sumD<<" "<<endl;
        cout<<sumA+sumB+sumC+sumD<<endl;
    }
}*/


//C
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
        int x, y;
        cin >> x >> y;
        int count = 0, n;
        for (int i = 1; i <= x; i++)
        {
            cin >> n;
            count += (i % y != n % y);
        }
        if (count > 2)
            cout << -1 << endl;
        else
            cout << count / 2 << endl;
    }
}*/


// D
/*#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1;
        cin >> s1;
        set<char> s2;
        if (s1[0] == 's')
            s1[0] = '.';
        if (s1[n - 1] == 'p')
            s1[n - 1] = '.';
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != '.')
                s2.insert(s1[i]);
        }
        if (s2.size() <= 1)
            yes;
        else
            no;
    }
}*/



//Topicwise
//1
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0){
            v.push_back(i);
        if((n/i)!=i){
            v.push_back(n/i);
        }
        }
    }
    sort(v.begin(), v.end());
    if(v.size()<k)
    {
        cout<<-1<<'\n';
    }
    else
    {
            cout<<v[k-1]<<'\n';
    }
}*/


//13
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1)
            cout<<"NO"<<endl;
        else{
        cout<<"YES"<<endl;
        cout<<a*1<<" "<<a*b<<" "<<(a+(a*b))<<endl;
        }
    }
}
