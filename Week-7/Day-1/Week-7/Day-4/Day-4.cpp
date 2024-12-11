//19
/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int> v;
        int b;
        while(n>0)
        {
            b=n%4;
            if( b==0 || b==2 )
            {
                v.push_back(0);

            }
            else if(b==3)
            {
                v.push_back(-1);
                n++;
            }
            else
            {
                v.push_back(1);
            }
            n/=2;
        }
        cout<<v.size()<<endl;
        for(auto val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
}*/


//18
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
        int n;
        cin >> n;
        n--;
        vector<int> v(n), v1(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v1[i] |= v[i];
            v1[i + 1] |= v[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((v1[i] & v1[i + 1]) != v[i])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << "-1"<<endl;
        }
        else
        {
            for (int val : v1)
            {
                cout << val << " ";
            }
            cout <<endl;
        }
    }
}*/
