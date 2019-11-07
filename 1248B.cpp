// codeforces 1248B

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll n;  cin>>n; 
	ll tree1 = 0,tree2 = 0,arr[n];
	for(ll i = 0; i < n; ++i)
	cin>>arr[i];
//	if(n == 1) cout<<arr[0];
	sort(arr,arr+n);
	for(ll i = 0; i < n/2; ++i)
	  tree1 += arr[i];
	for(ll i = n/2; i < n; ++i)
	tree2 += arr[i];
	ll ans = tree1*tree1 + tree2*tree2;
	cout<<ans<<"\n"; 
	return 0;    
}
