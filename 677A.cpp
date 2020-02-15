//BISMILLAHIR RAHMANIR RAHIM
/*
Do DEEN, keep SMILE :) 
 Author :: A R Ashik
.............CUET_CSE17.........
 */
// codeforces problem:677A
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h,ans = 0;
	cin>>n>>h;
	
	for(int i = 0; i < n; ++i){
		int in;
		cin>>in;
	if(in > h)
		ans += 2;
	else
	 ans++;
}
	cout<<ans<<endl;
	return 0;
}
