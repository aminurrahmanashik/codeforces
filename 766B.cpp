// Bismillahir Rahmanir Rahim
// cf-766B

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int>v;
	for(int i = 0; i < n; ++i){
		long long a; cin>>a;
	    v.push_back(a);
	}
	sort(v.begin(),v.end()); 
	for(int i = 0;  i < n-2; ++i){
		if(v[i]+v[i+1] > v[i+2] ){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
}
