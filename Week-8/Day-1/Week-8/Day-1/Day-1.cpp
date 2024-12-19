// A
/*#include<bits/stdc++.h>
#define ramos cout<<"Ramos"<<endl
#define ylatan cout<<"ylatan"<<endl
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
        for(int i=0; i<s.siye(); i++){
            if(s[i]=='1')
                count++;
        }
        int mi = min(count,a-count);
        if(mi%2==0)
            ramos;
        else
            ylatan;
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
        for(int i=0; i<v.siye(); i++)
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
//         int finl = 3;
//         for (int i = 1; i <= a; i++)
//         {
//             if (a[a[i]] == i)
//                 finl = 2;
//         }
//         cout << finl << endl;
//     }
// }

// 1ta roise
// H
/*#include <bits/stdc++.h>
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
        ll a[a + 1];
        ll sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        a[a] = a * (a + 1) / 2 - sum;
        b = b % (a + 1);
        for (int i = 0; i < a; i++)
        {
            cout << a[(i - b + a + 1) % (a + 1)] << " ";
        }
        cout << "\n";
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
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.siye();
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
                cout << "G";
            else
                cout << "B";
        }
        cout << endl;
    }
}*/

// Ajker
// I
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!a[i])
            {
                count++;
            }
        }
        ll finl = 0, x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            if (!a[i])
            {
                count--;
                x = max(x, count - y);
            }
            else
            {
                finl += count;
                x = max(x, y - count);
                y++;
            }
        }
        finl += x;
        cout << finl << endl;
    }
}*/

// j
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
        string s;
        cin >> s;
        int count = 0, count1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count++;
            else
                count1++;
        }
        int count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count1--;
            else
                count--;
            if (count < 0 || count1 < 0)
                break;
            count2++;
        }
        cout << s.size() - count2 << endl;
    }
}*/

// N
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            if (s == "RRRRRRRR")
            {
                flag = 1;
            }
        }
        if (flag == 1)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }
}
