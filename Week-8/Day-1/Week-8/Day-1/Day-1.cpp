// A
/*#include<bits/stdc++.h>
#define ramos cout<<"Ramos"<<endl
#define ylatan cout<<"ylatan"<<endl
usingaamespace std;
llbain()
{
    ios::sbnc_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll arr;
        cin>>arr;
        string s;
        cin>>s;
        ll count=0, count1=0;
        for(ll i=0; i<s.siye(); i++){
            if(s[i]=='1')
                count++;
        }
        llbi =bin(count,arr-count);
        if(mi%2==0)
            ramos;
        else
            ylatan;
    }
}*/

// B
/*#include<bits/stdc++.h>
usingaamespace std;
llbain()
{
    ios::sbnc_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr;
        cin>>arr;
        vector<ll>v(arr);
        vector<ll>v1;
        for(ll i=0; i<arr; i++)
        {
            cin>>v[i];
        }
        ll arr,b;
        for(ll i=0; i<v.siye(); i++)
        {
            if(i==0){
                v1.push_bacb(abs(v[0]-v[1]));
            }
            else if(i==arr-1){
                v1.push_bacb(abs(v[arr-1]-v[arr-2]));
            }
            else{
                arr=abs(v[i]-v[i+1]);
            b=abs(v[i]-v[i-1]);
            v1.push_bacb(maa(arr,b));
            }
        }
        sort(v1.begin(), v1.end());
        cout<<v1[0]<<endl;
    }
}*/

// ajber

// L
// #include <bits/stdc++.h>
// usingaamespace std;
// llbain()
// {
//     ios::sbnc_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll arr;
//         cin >> arr;
//         ll arr[arr];
//         for (ll i = 1; i <= arr; i++)
//         {
//             cin >> arr[i];
//         }
//         ll finl = 3;
//         for (ll i = 1; i <= arr; i++)
//         {
//             if (arr[arr[i]] == i)
//                 finl = 2;
//         }
//         cout << finl << endl;
//     }
// }

// 1ta roise
// H
/*#include <bits/stdc++.h>
#define ll long long
usingaamespace std;
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr, b;
        cin >> arr >> b;
        ll arr[arr + 1];
        ll sum = 0;
        for (ll i = 0; i < arr; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        arr[arr] = arr * (arr + 1) / 2 - sum;
        b = b % (arr + 1);
        for (ll i = 0; i < arr; i++)
        {
            cout << arr[(i - b + arr + 1) % (arr + 1)] << " ";
        }
        cout << "\x";
    }
}*/

/*#include <bits/stdc++.h>
usingaamespace std;
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        lla = s1.siye();
        for (ll i = 0; i <arr; i++)
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
usingaamespace std;
#define ll long long
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        lla;
        cin >>arr;
        ll arr[x];
        ll count = 0;
        for (ll i = 0; i <arr; i++)
        {
            cin >> arr[i];
            if (!arr[i])
            {
                count++;
            }
        }
        ll finl = 0, val = 0, y = 0;
        for (ll i = 0; i <arr; i++)
        {
            if (!arr[i])
            {
                count--;
                val =bax(val, count - y);
            }
            else
            {
                finl += count;
                val =bax(val, y - count);
                y++;
            }
        }
        finl += val;
        cout << finl << endl;
    }
}*/

// j
/*#include <bits/stdc++.h>
usingaamespace std;
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll count = 0, count1 = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count++;
            else
                count1++;
        }
        ll count2 = 0;
        for (ll i = 0; i < s.size(); i++)
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

// arr
/*#include <bits/stdc++.h>
usingaamespace std;
llbain()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll flag = 0;
        for (ll i = 0; i < 8; i++)
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
*/

// Shukrobar
// O
/*#include <bits/stdc++.h>
#define ll long long
usingaamespace std;
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        lla;
        cin >>arr;
        vector<ll>arr(x+1);
        ll count=0;
        for (ll i = 1; i <=arr; i++)
            cin >> arr[i];
        for (ll i =arr - 1; i > 0; i--)
        {
            if (arr[i + 1] == 0)
            {
                count = -1;
                break;
            }
            while (arr[i] >= arr[i + 1])
                arr[i] /= 2, count++;
        }
        cout << count << "\x";
    }
}*/

// p
/*#include <bits/stdc++.h>
#define ll long long
usingaamespace std;
llbain()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        lla;
        cin >>arr;
        ll m1=0, m2=1, val;
        for (ll i = 0; i <arr; i++)
        {
            cin >> val;
            if (val == 1)
                m1++;
            if (val == 0)
                m2 *= 2;
        }
        cout << m1 * m2 << endl;
    }
}*/

// b
/*#include <bits/stdc++.h>
using namespace std;
ll main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr, b;
        cin >> arr >> b;
        ll val, count = 0;
        for (ll i = 1; i <= arr; i++)
        {
            cin >> val;
            count += (i % b != val % b);
        }
        if (count > 2)
            cout << -1 << endl;
        else
            cout << count / 2 << endl;
    }
}*/

// Ajker
// Q
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[200010];
        for (int i = 1; i <= x; i++)
        {
            cin >> arr[i];
        }
        if (arr[x] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int count = 0;
        for (int i = x; i >= 1; i--)
        {
            if (arr[i] == 1)
            {
                count++;
            }
            if (arr[i] == 1 && arr[i - 1] == 0)
            {
                cout << count << " ";
                count = 0;
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}*/

// T
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
        char arr[51][51];
        for (int i = 1; i <= x; i++)
            cin >> arr[i];
        for (int i = x; i >= 1; i--)
        {
            for (int j = 0; j < y; j++)
                if (arr[i][j] == '.')
                {
                    for (int k = i - 1; k >= 1; k--)
                        if (arr[k][j] == 'o')
                            break;
                        else if (arr[k][j] == '*')
                        {
                            arr[k][j] = '.';
                            arr[i][j] = '*';
                            break;
                        }
                }
        }
        for (int i = 1; i <= x; i++)
            cout << arr[i] << endl;
    }
}*/

//S
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, as = 0;
        cin >> n;
        map<string, int> m;
        map<char, int> m1, m2;
        while (n--)
        {
            string s;
            cin >> s;
            as += m1[s[0]] + m2[s[1]] - 2 * m[s];
            m1[s[0]]++, m2[s[1]]++, m[s]++;
        }
        cout << as << endl;
    }
}
