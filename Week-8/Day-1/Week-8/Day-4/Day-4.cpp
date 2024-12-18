//H
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
