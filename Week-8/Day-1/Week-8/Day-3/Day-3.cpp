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
