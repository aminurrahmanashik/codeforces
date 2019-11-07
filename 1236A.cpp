#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	
	for(int i = 0; i < T; ++i){
		int a,b,c;
		cin>>a>>b>>c;
	 int  x = min(b,c / 2);
	  b -= x;
	 int  y = min(a,b/2);
		cout<<3*(x+y)<<"\n";
	}
	return 0;
}
