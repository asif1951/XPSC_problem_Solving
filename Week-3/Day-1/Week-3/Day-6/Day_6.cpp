//5
/*class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n=arr.size(),l=0,r=0;
        vector<int>ans;
        queue<int>q;
        while(r<n){
            if(arr[r]<0){
            q.push(arr[r]);
            }
            if(r-l+1==k){
                if(!q.empty()){
                    ans.push_back(q.front());
                    if(arr[l]==q.front()){
                        q.pop();
                    }
                }
                else{
                    ans.push_back(0);
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return ans;
    }
};



//4
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n=arr.size(),l=0,r=0;
        vector<int>ans;
        queue<int>q;
        while(r<n){
            if(arr[r]<0){
            q.push(arr[r]);
            }
            if(r-l+1==k){
                if(!q.empty()){
                    ans.push_back(q.front());
                    if(arr[l]==q.front()){
                        q.pop();
                    }
                }
                else{
                    ans.push_back(0);
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return ans;
    }
};


//H
#include <bits/stdc++.h>
#define ll long long
const int ma=200010;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,arr[ma];
        string s;
        cin>>n>>s;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                sum+=i;
                arr[i]=n-i-i-1;
            }
            else
            {
                sum+=n-i-1;
                arr[i]=i+i-n+1;
            }
        }
        sort(arr,arr+n);
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]>0)
                sum+=arr[i];
            cout<<sum<<" ";
        }
        cout<<'\n';
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
    while (t--){
        string a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "=" << endl;
            continue;
        }
        char ch = a.back();
        char ch1 = b.back();
        if (ch != ch1) {
            if (ch == 'S') {
                cout << "<" << endl;
            } else if (ch == 'M') {
                cout << (ch1 == 'S' ? ">" : "<") << endl;
            } else {
                cout << ">" << endl;
            }
            continue;
        }
        if (ch == 'S') {
            cout << (a.size() < b.size() ? ">" : "<") << endl;
        } else if (ch == 'L') {
            cout << (a.size() > b.size() ? ">" : "<") << endl;
        }
    }
}*/



//10
/*class Solution
{
public:
    int search(string pat, string txt)
    {
        vector<int>v(256,0);
        vector<int>v1(256,0);
        int as=0,ass=0;
        int val;
        for(int i=0; i<pat.size(); i++)
        {
            v[pat[i]]++;
            v1[txt[i]]++;
        }
        int s=0;
        if(v==v1)
            s++;
        int i=0,j=pat.size();
        while(j<txt.size())
        {
            v1[txt[j]]++;
            v1[txt[i]]--;
            if(v==v1)
                s++;
            i++;
            j++;
        }
        return s;
    }
};*/



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        string x, y;
        cin >> x >> y;
        char as = x.back();
        char ass = y.back();
        if (as != ass)
        {
            if (as == 'S')
            {
                cout << "<" << endl;
            }
            else if (as == 'M')
            {
                cout << (ass == 'S' ? ">" : "<") << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        else
        {
            int count = x.size() - 1;
            int count1 = y.size() - 1;
            if (as == 'S')
            {
                if (count < count1)
                {
                    cout << ">" << endl;
                }
                else if (count > count1)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else if (as == 'L')
            {
                if (count > count1)
                {
                    cout << ">" << endl;
                }
                else if (count < count1)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else
            {
                cout << "=" << endl;
            }
        }
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
        int l = 0, r = 0, s = 100, m = 150, la = 200;
        if (s1[s1.size() - 1] == s2[s2.size() - 1])
        {
            if (s1[s1.size() - 1] == 'S')
            {
                for (int i = s1.size() - 1; i >= 0; i--)
                {
                    if (s1[i] == 'S')
                    {
                        l= s;
                    }
                    else
                    {
                        l -= 1;
                    }
                }
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    if (s2[i] == 'S')
                    {
                        r = s;
                    }
                    else
                    {
                        r -= 1;
                    }
                }
                if (l < r)
                {
                    cout << "<"<<endl;
                }
                else if (l == r)
                {
                    cout << "="<<endl;
                }
                else if(l>r)
                {
                    cout << ">"<<endl;
                }
            }
            else
            {
                for (int i = s1.size() - 1; i >= 0; i--)
                {
                    if (s1[i] == 'L')
                    {
                        l = la;
                    }
                    else
                    {
                        l += 1;
                    }
                }
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    if (s2[i] == 'L')
                    {
                        r = la;
                    }
                    else
                    {
                        r += 1;
                    }
                }
                if (l < r)
                {
                    cout << "<"<<endl;
                }
                else if (l == r)
                {
                    cout << "="<<endl;
                }
                else
                {
                    cout << ">"<<endl;
                }
            }
        }
        else
        {
            if (s1[s1.size() - 1] == 'L')
            {
                l += la;
            }
            else if (s1[s1.size() - 1] == 'M')
            {
                l += m;
            }
            else if (s1[s1.size() - 1] == 'S')
            {
                l += s;
            }
            if (s2[s2.size() - 1] == 'L')
            {
                r += la;
            }
            else if (s2[s2.size() - 1] == 'M')
            {
                r += m;
            }
            else if (s2[s2.size() - 1] == 'S')
            {
                r += s;
            }
            if (l < r)
            {
                cout << "<"<<endl;
            }
            else if (l == r)
            {
                cout << "="<<endl;
            }
            else
            {
                cout << ">"<<endl;
            }
        }
    }
}*/


#include <bits/stdc++.h>
#define ll long long
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
        vector<vector<int>> v(x, vector<int>(y));
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<ll> v1(x + y - 1, 0);
        vector<ll> v2(x + y - 1, 0);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                v1[i - j + y - 1] += v[i][j];
                v2[i + j] += v[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                ll sum1 = v1[i - j + y - 1] + v2[i + j] - v[i][j];
                sum = max(sum, sum1);
            }
        }
        cout << sum << endl;
    }
}




