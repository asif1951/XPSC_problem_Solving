//4
/*#include <bits/stdc++.h>
using namespace std;
bool prime(int x)
{
    if (x == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if ((x % i) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if (prime(x))
    {
        cout << 1 << '\n';
    }
    else if ((x % 2) == 0)
    {
        cout << 2 << '\n';
    }
    else
    {
        if (prime(x - 2))
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }
}*/


//5
/*#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, ans=1;
        cin>>n;
        for(int i=1; i<=n; i++){
            ans=(1LL,ans%MOD*i%MOD)%MOD;
        }
        cout<<ans<<endl;
    }
}*/


//9
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
        int x;
        cin >> x;
        cout << x / 2 << endl;
    }
}
*/

//15
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
        int a, b;
        cin >> a >> b;
        if (b < 2 * a)
        {
            cout << "-1 -1\n";
        }
        else
        {
            cout << a << " " << 2 * a << "\n";
        }
    }
}
