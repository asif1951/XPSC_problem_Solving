//D
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    stack<string> st;
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s[s.size() - 2] << s[s.size() - 1] << '\n';
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            st.push(s1);
        }
        unordered_set<string> as;
        while (!st.empty())
        {
            if (as.find(st.top()) == as.end())
                cout << st.top()[(st.top()).size() - 2] << st.top()[(st.top()).size() - 1];
            as.insert(st.top());
            st.pop();
        }
        cout << '\n';
    }
}


//9
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
        long long sum=0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
        }

        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]<0)
            {
                if(a==0)
                {
                    a=1;
                    b++;
                }
            }
            else if(v[i]>0)
                a=0;
        }
        cout<<sum<<" "<<b <<endl;
    }
}


//8
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), v;
    for (int i = 0; i < n; i++){
            cin >> a[i];
    }
    for (int i = 0; i < m; i++){
            cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            v.push_back(a[i]);
            i++;
        } else {
            v.push_back(b[j]);
            j++;
        }
    }
    while (i < n) {
        v.push_back(a[i]);
        i++;
    }
    while (j < m) {
        v.push_back(b[j]);
        j++;
    }
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}


//7
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
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<a; i++)
        {
            if(s[i]=='B')
            {
                count++;
                i+=b-1;
            }
        }
        cout<<count<<endl;
    }
}


//6
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
        string s;
        cin>>a>>b>>s;
        int count=0;
        int as=INT_MAX;
        for(int i=0; i<a; i++)
        {
            if(s[i]=='W')
                count++;
            if(i>=b&&s[i-b]=='W')
                count--;
            if(i>=b-1)
                as=min(as,count);
        }
        cout<<as<<endl;
    }
}
