//5
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
}
