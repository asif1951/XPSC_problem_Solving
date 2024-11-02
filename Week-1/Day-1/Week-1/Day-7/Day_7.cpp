//B. Chat Order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    map<string,bool> mp;
    for(int i=n-1; i>=0; i--)
    {
        if(!mp[s[i]])
        {
            cout<<s[i]<<endl;
        }
        mp[s[i]]=true;
    }
}



//A. Strong Password
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=1;
		while(s[i-1]!=s[i]&&i<s.size()){
			i++;
		}
		if(s[i-1]=='z')
		s.insert(i,1,'a');
		else
		s.insert(i,1,'z');
		cout<<s<<endl;
	}
}


//B. Symmetric Encoding
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
	    int a;
	    string s;
		cin>>a;
		cin>>s;
		string k=s;
		sort(k.begin(),k.end());
		k.erase(unique(k.begin(),k.end()),k.end());
		for(auto val:s)
		{
			int t=k.find(val);
			cout<<k[k.size()-1-t];
		}
		cout<<endl;
	}
}
