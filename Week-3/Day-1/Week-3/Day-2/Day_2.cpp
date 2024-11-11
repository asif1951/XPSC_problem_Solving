//3
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    ll l=0, r=0,count=0;
    while(l<n&&r<m){
        int crnt=a[l],count1=0,count2=0;
        while(l<n&&a[l]==crnt){
            count1++;
            l++;
        }
        while(r<m&&crnt>b[r]){
            r++;
        }
        while(r<m&&b[r]==crnt){
            count2++;
            r++;
        }
        count+=(1LL*count1*count2);
    }
    cout<<count<<endl;
}


//2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int l=0, r=0,count=0;
    while(r<m){
        if(l<n  && a[l]<b[r]){
            count++;
            l++;
        }
        else{
            cout<<count<<" ";
            r++;
        }
    }
}


//1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0, b=n-1, ans=n;
        while(a<=b)
        {
            if(s[a]==s[b])
            {
                break;
            }
            else
            {
                ans=ans-2;
                a++;
                b--;
            }
        }
        cout<<ans<<'\n';
    }
}
