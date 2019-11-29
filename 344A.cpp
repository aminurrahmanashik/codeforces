
// Bismilahir Rahmanir Rahim// 
// A R ASHIK 1704013,CSE,CUET

#include<bits/stdc++.h>
using namespace std;

int a,b;
int main(){
	int n,cnt = 0;  
	cin>>n;
	cin>>a;
	
	for(int i = 1; i < n; ++i){
	   cin>>b;
	   a ^= b;
	  // cout<<a<<endl;
	   
	   if(a == 11){
	   ++cnt; 
	   a = b;
}
	   else a = b;
	}
	
	cout<<cnt+1<<endl;
	return 0;
}
