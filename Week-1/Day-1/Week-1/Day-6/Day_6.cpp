//13
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int ma;
    for(auto ii:mp){
        //cout<<ii.first<<"->"<<ii.second<<endl;
        v1.push_back(ii.second);
    }
    for(int i=0;i<v1.size();i++){
        ma=*max_element(v1.begin(),v1.end());
    }
    cout<<ma<<endl;
}*/


//8
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    map<string,string>mp;
    for(int i=0;i<a;i++){
        string s1,s2;
        cin>>s1>>s2;
        mp[s2]=s1;
    }
    for(int i=0;i<b;i++){
        string s1,s2;
        cin>>s1>>s2;
        s2.pop_back();
        cout<<s1<<" "<<s2<<"; #"<<mp[s2]<<endl;
    }
}*/


//10
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,bool>mp;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(mp[s]){
            cout <<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        mp[s] = true;
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
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        int count=0,count1=0;
        for(int i=0;i<2*n;i++){
            if(a[i]==0)
                count++;
            else
                count1++;
        }
        if(count==0){
            cout<<"0"<<" "<<"0"<<endl;
        }
        else {
            if(count>=count1){
                cout<<count%2<<" "<<count1<<endl;
            }
            else{
                cout<<count%1<<" "<<count<<endl;
            }
        }
    }
}*/



/*#include<bits/stdc++.h>
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
}*/



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        deque<int>v;
        for(int i=0;i<k;i++){
            int b,c;
            cin>>b>>c;
            v.push_back(c);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        int ma=*max_element(v.begin(),v.end());
        if(n>1){
            cout<<sum<<endl;
        }
        else{
            cout<<ma<<endl;
        }
        v.clear();
    }
}*/



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int she, bot;
        cin>>she>>bot;
        map<int,int>mp;
        while(bot--){
            int a, b;
            cin>>a>>b;
            int p=mp[a];
            mp[a]=p+b;
        }
        deque<int>vec;
        for(auto [a,b]:mp){
            vec.push_back(b);
        }

        sort(vec.rbegin(), vec.rend());

        int count=0;
        int si=vec.size();
        while(si-- && she--){
            int v=vec.front();
            count+=v;
            vec.pop_front();
        }
        cout<<count<<endl;
    }
    return 0;
}*/



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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> costs;
        for (int i = 0; i < k; ++i)
        {
            int brand, cost;
            cin >> brand >> cost;
            costs[brand].push_back(cost);
        }
        vector<int> max_costs_per_brand;
        for (auto &entry : costs)
        {
            vector<int> &costs = entry.second;
            sort(costs.rbegin(), costs.rend());
            int brand_total = 0;
            for (int cost : costs)
            {
                brand_total += cost;
            }
            max_costs_per_brand.push_back(brand_total);
        }
        sort(max_costs_per_brand.rbegin(), max_costs_per_brand.rend());
        int result = 0;
        for (int i = 0; i < min(n, (int)max_costs_per_brand.size()); ++i)
        {
            result += max_costs_per_brand[i];
        }
        cout << result << endl;
    }
}*/



/*#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, vector<int>>v;
        for (int i = 0; i < k; ++i) {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
        }
        vector<int> v1;
        for (auto entry : v) {
            vector<int> v3 = entry.second;
            sort(v3.rbegin(), v3.rend());
            int brand_total = 0;
            for (int cost : v3) {
                brand_total += cost;
            }

            v1.push_back(brand_total);
        }
        sort(v1.rbegin(), v1.rend());
        int result = 0;
        for (int i = 0; i < min(n, (int)v1.size()); ++i) {
            result += v1[i];
        }
        cout << result << endl;
    }
}*/






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


