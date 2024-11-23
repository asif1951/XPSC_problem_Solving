//11
/*public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        long long int  j=0, ans=0,sum=0;
        unordered_map<int,int>mp;
        while(j<arr.size()){
            sum+=arr[j];
            if(sum==k){
                ans=j+1;
            }
            if(mp.find(sum-k)!=mp.end()){
                ans=max(ans, j-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=j;
            }
            j++;
        }
        return ans;
}*/
//j
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b, c, d;
    string s, s1;
    cin >> t;
    while (t--)
    {
        cin >> s;
        a = s[0];
        b = s[s.size() - 1];
        if (a < b)
        {
            c = 1;
        }
        else
        {
            c = -1;
        }
        d = 0;
        s1 = "";
        for (int i = a; i != b + c; i += c)
        {
            for (int j = 0; j < s.size(); ++j)
            {
                if (i == s[j])
                {
                    s1 += to_string(j + 1) + " ";
                    ++d;
                }
            }
        }
        cout << abs(a - b) << " " << d << "\n";
        cout << s1 << "\n";
    }
}*/

//i
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
        int n;
        cin >> n;
        vector<int> v((n*(n-1)/2));
        for (int i = 0; i < (n*(n-1)/2); i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> v1;
        int in = 0;
        for (int i = 1; i < n; i++)
        {
            v1.push_back(v[in]);
            in += n - i;
        }
        v1.push_back(v[n*(n-1)/2 - 1]);
        for (auto val : v1)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
}
