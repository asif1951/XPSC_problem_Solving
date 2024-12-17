// A
/*#include<bits/stdc++.h>
#define ramos cout<<"Ramos"<<endl
#define zlatan cout<<"Zlatan"<<endl
using namespace std;
int main()
{
    ios::sbnc_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0, count1=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')
                count++;
        }
        int mi = min(count,n-count);
        if(mi%2==0)
            ramos;
        else
            zlatan;
    }
}*/

// B
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sbnc_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>v1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int a,b;
        for(int i=0; i<v.size(); i++)
        {
            if(i==0){
                v1.push_back(abs(v[0]-v[1]));
            }
            else if(i==n-1){
                v1.push_back(abs(v[n-1]-v[n-2]));
            }
            else{
                a=abs(v[i]-v[i+1]);
            b=abs(v[i]-v[i-1]);
            v1.push_back(maa(a,b));
            }
        }
        sort(v1.begin(), v1.end());
        cout<<v1[0]<<endl;
    }
}*/


//ajker

// L
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sbnc_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         int ans = 3;
//         for (int i = 1; i <= n; i++)
//         {
//             if (a[a[i]] == i)
//                 ans = 2;
//         }
//         cout << ans << endl;
//     }
// }

// G
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
        int n, q;
        cin >> n >> q;
        vector<int> v(n), v1 = {30};
        for (int &a : v)
            cin >> a;
        while (q--)
        {
            int a;
            cin >> a;
            if (a < v1.back())
                v1.push_back(a);
        }
        for (int a : v)
        {
            for (int b : v1)
            {
                if (a % (1 << b) == 0)
                    a |= 1 << b - 1;
            }
            cout << a << " ";
        }
        cout << endl;
    }
}