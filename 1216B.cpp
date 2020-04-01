// Bismillahir Rahmanir Rahim
// CF-1216A

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
typedef long long ll;
int main(){
	int n,a; cin>>n;
	
	for(int i = 0; i < n; ++i){
		cin>>a;
		v.push_back(make_pair(a,i+1));
	}
	sort(v.begin(),v.end());
	ll sum = 0;
	for(int i = 1; i < n; ++i){
		sum += (v[i].first*i)+1;
	}
	ll ans = sum+1;
	cout<<ans<<endl;
	for(int i = 0; i < n; ++i){
	cout<<v[i].second<<" ";
	}
	return 0;
}
