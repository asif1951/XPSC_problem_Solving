//A
#include<bits/stdc++.h>
#define rcb cout<<"RCB"<<endl
#define csk cout<<"CSK"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(x-y>=18)
        rcb;
    else
        csk;
}


//B
#include<bits/stdc++.h>
//#define rcb cout<<"RCB"<<endl
//#define csk cout<<"CSK"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    int div1,div2;
    div1=x/3;
    div2=y/3;
    if(x%3==0||y%3==0){
        cout<<0<<endl;
    }
    else{
        if(x-(3*div1)==y-(3*div2)){
            cout<<x-(3*div1)<<endl;
        }
        else{
            cout<<abs((x-(3*div1))-(y-(3*div2)))<<endl;
        }
    }

    }
}


//C
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
        string s;
        cin >> s;
        int count = 0, count1 = 0;
        char as = s[0];
        if (as == '0')
            count++;
        else
            count1++;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != as)
            {
                if (s[i] == '0')
                    count++;
                else
                    count1++;
                as = s[i];
            }
        }
        cout << min(count, count1) << endl;
    }
}
