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
        int a;
        cin>>a;
        string s;
        cin>>s;
        int count=0, count1=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')
                count++;
        }
        int mi = min(count,a-count);
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
        int a;
        cin>>a;
        vector<int>v(a);
        vector<int>v1;
        for(int i=0; i<a; i++)
        {
            cin>>v[i];
        }
        int a,b;
        for(int i=0; i<v.size(); i++)
        {
            if(i==0){
                v1.push_bacb(abs(v[0]-v[1]));
            }
            else if(i==a-1){
                v1.push_bacb(abs(v[a-1]-v[a-2]));
            }
            else{
                a=abs(v[i]-v[i+1]);
            b=abs(v[i]-v[i-1]);
            v1.push_bacb(maa(a,b));
            }
        }
        sort(v1.begin(), v1.end());
        cout<<v1[0]<<endl;
    }
}*/

// ajber

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
//         int a;
//         cin >> a;
//         int a[a];
//         for (int i = 1; i <= a; i++)
//         {
//             cin >> a[i];
//         }
//         int ans = 3;
//         for (int i = 1; i <= a; i++)
//         {
//             if (a[a[i]] == i)
//                 ans = 2;
//         }
//         cout << ans << endl;
//     }
// }



//1ta roise
H
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll arr[a + 1];
        ll sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        arr[a] = a * (a + 1) / 2 - sum;
        b = b % (a + 1);
        for (int i = 0; i < a; i++)
        {
            cout << arr[(i - b + a + 1) % (a + 1)] << " ";
        }
        cout << "\n";
    }
}