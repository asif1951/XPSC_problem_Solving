//17
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
        int x = 1;
        while (x <= n)
        {
            x <<= 1;
        }
        x >>= 1;
        cout << x - 1 << endl;
    }
}*/



//16
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
        string s1;
        cin>>s1;
        int count=0;
        for(int i=0; i<n/2; i++)
        {
            if(s1[i]!=s1[n-1-i])
                count++;
        }
        for(int i=0; i<=n; i++)
        {
            if(i>=count && ((i-count)%2==0 || n%2) && i<=n-count)
                cout<<'1';
            else
                cout<<'0';
        }
        cout<<endl;
    }
}*/


//15
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
        int x=0,y=2047;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            x|=a[i];
            y&=a[i];
        }
        cout<<x-y<<endl;
    }
}*/


//14
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
        int n,x;
        cin>>n;
        int y;
        cin>>y;
        for(int i=2; i<=n; i++)
        {
            cin>>x;
            y=y&x;
        }
        cout<<y<<endl;
    }
}
