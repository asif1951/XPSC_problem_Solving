//11
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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        while (q--)
        {
            int d;
            cin >> d;
            if(d < v[0])
            {
                cout << v[0]-1 << '\n';
                continue;
            }
            if(d > v[m-1])
            {
                cout << n - v[m-1] << '\n';
                continue;
            }
            auto it = lower_bound(v.begin(), v.end(), d);
            auto as = it;
            as--;
            int l = *as, r = *it;
            int mi = (r+l)/2;
            cout << min(abs(mi-l), abs(mi-r)) << '\n';
        }
    }
}


//12
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
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        s2+= s2;
        bool flag = false;
        int count = 0, count2 = 0;
        if(s1[0] == 'g')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i] == 'g')
            {
                count2 = max(count2,count);
                flag = false;
            }
            if(s2[i] == s1[0] && flag == false)
            {
                flag = true;
                count = 0;
            }
            if(flag)
                count++;
        }
        cout<<count2<<endl;
    }
}


//14
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
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        s2+= s2;
        bool flag = false;
        int count = 0, count2 = 0;
        if(s1[0] == 'g')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i] == 'g')
            {
                count2 = max(count2,count);
                flag = false;
            }
            if(s2[i] == s1[0] && flag == false)
            {
                flag = true;
                count = 0;
            }
            if(flag)
                count++;
        }
        cout<<count2<<endl;
    }
}


//10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
        int x=n;
        int y=n-2;
        while(x>=3 && y>=1){
            cout<<x<<" "<<y<<endl;
            x--;
            y--;
        }
    }
}
