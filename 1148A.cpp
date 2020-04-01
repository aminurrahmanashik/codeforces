// Bismillahir Rahmanir Rahim
//CF-1148A

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);  cin.tie(NULL);
using namespace std;

int main(){
	fast;
	long long a,b,ab;
	cin>>a>>b>>ab;
	
	if(a < b)  cout<<(2*(a+ab))+1;
	else if(a > b)  cout<<(2*(b+ab))+1;
	else cout<<2*(b+ab);
	return 0;
}
