//Week 1 | Topicwise | STL - 1
//Problem-1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
    int sereja=0,dima=0,who=1;
    while(!dq.empty()){
        int left=dq.front(),right=dq.back(),ma;
        ma=max(left,right);
        if(who%2!=0){
            sereja+=ma;
        }
        else{
            dima+=ma;
        }
        if(ma==left){
            dq.pop_front();
        }
        else{
            dq.pop_back();
        }
        who++;
    }
    cout<<sereja<<" "<<dima<<endl;
}



//Week 1
//E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int div=c/a;
    int mult=b*div;
    if(a>c){
        cout<<"0"<<endl;
    }
    else{
        cout<<mult<<endl;
    }
}


//F
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, bool>m;
    for(char c : s) {
        m[c] = true;
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (!m[ch]) {
            cout << ch << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}

