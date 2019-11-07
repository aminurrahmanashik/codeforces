// codeforces 1249C1...
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ans(ll num){
	while(num > 0){
		if(num % 3 == 2)  return false;
		num /= 3;
	}
	return true;
}

int main(){
    int q; cin>>q;
  while(q--){
  	ll n; cin>>n;
  	while(!ans(n)){
  		++n;
	  }
	  cout<<n<<"\n";
  }  return 0;
}
