//Week 2
//D
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='T'){
                c++;
            }
            else if(s[i]=='i'){
                c1++;
            }
            else if(s[i]=='m'){
                c2++;
            }
            else if(s[i]=='u'){
                c3++;
            }
            else if(s[i]=='r'){
                c4++;
            }
        }
        if(c==1&&c1==1&&c2==1&&c3==1&&c4==1&&s.size()==5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


//E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int m;
        string s;
        for(int i=0;i<n;i++){
            cin>>m>>s;
            for(int j=0;j<s.size();j++){
                if(s[j]=='U'){
                    v[i]--;
                }
                else{
                    v[i]++;
                }
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]%10==-1){
            cout<<9<<" ";
            }
        else if(v[i]%10==-2){
            cout<<8<<" ";
        }
        else if(v[i]%10==-3){
            cout<<7<<" ";
        }
            else if(v[i]%10==-4){
            cout<<6<<" ";
            }
            else if(v[i]%10==-5){
            cout<<5<<" ";
            }
            else if(v[i]%10==-6){
            cout<<4<<" ";
            }
            else if(v[i]%10==-7){
            cout<<3<<" ";
            }
            else if(v[i]%10==-8){
            cout<<2<<" ";
            }
            else if(v[i]%10==-9){
            cout<<1<<" ";
            }
            else{
            cout<<v[i]%10<<" ";
            }
        }
        cout<<endl;
    }
}


//F
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='G')
                s1[i]='B';
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='G')
                s2[i]='B';
        }
        if(s1==s2)
            yes;
        else
            no;
    }
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int mult,mult2;
        mult=x*y;
        mult2=1440*z;
        if(mult<=mult2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}*/


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum<n){
            cout<<"NO"<<endl;
        }
        else{
        long long int mo=sum%n;
        long long int sub=n-mo;
        if(mo==0)
            cout<<"YES"<<endl;
        else if(sub<k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int count=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }
            else if(s1[i]=='R'&&s2[i]=='S'||s1[i]=='S'&&s2[i]=='P'||s1[i]=='P'&&s2[i]=='R'){
                count++;
            }
            else{
                count1++;
            }
        }
        //cout<<count<<" "<<count1<<endl;
        if(count>count1)
            cout<<0<<endl;
        else
            cout<<count1-count<<endl;
    }
}



/*#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;
        int count = 0, chefinaScore = 0;
        for (int i = 0; i < N; ++i) {
            if (A[i] == B[i]){
                continue;
            } else if ((A[i] == 'R' && B[i] == 'S') ||
                       (A[i] == 'S' && B[i] == 'P') ||
                       (A[i] == 'P' && B[i] == 'R')) {
                count++;
            } else {
                chefinaScore++;
            }
        }
        if (chefScore > chefinaScore) {
            cout << 0 << endl;
            continue;
        }in
        int changesNeeded = chefinaScore - chefScore + 1;
        int possibleChanges = 0;
        for (int i = 0; i < N; ++i) {
            if ((A[i] == 'R' && B[i] == 'P') ||
                (A[i] == 'S' && B[i] == 'R') ||
                (A[i] == 'P' && B[i] == 'S')) {
                possibleChanges++;
            }
        }
        if (possibleChanges >= changesNeeded) {
            cout << changesNeeded << endl;
        } else {
        }
    }
}*/
