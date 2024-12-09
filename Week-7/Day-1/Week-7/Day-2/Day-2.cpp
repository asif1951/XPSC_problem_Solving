//4
/*#include<bits/stdc++.h>
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
        string s1,s2;
        cin>>s1>>s2;
        if(s1.find("1")<=s2.find("1"))
            yes;
        else
            no;
    }
}*/



//21
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
        ll x,y,z;
        cin>>x>>y>>z;
        ll a=((x&y)^z);
        if(((a|x)-(a&y))==z)
            cout<<a<<endl;
        else
            cout<<-1<<endl;
    }
}*/


//20
/*#include<bits/stdc++.h>
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
        int sum[30] = {0};
        for (int i = 1; i <= n; i++)
        {
            int b;
            cin >> b;
            for (int j = 0; j < 30; j++)
            {
                sum[j] += (b % 2);
                b /= 2;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int j = 0; j < 30; j++)
            {
                if (sum[j] % i != 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}*/

