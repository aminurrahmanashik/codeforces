// Bismillahir Rahmanir Rahim
// CF-1216A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt = 0; cin>>n;
	string s;  cin>>s;
	
	int len = s.length();
	
	for(int i = 1; i <= len; i += 2){
		if(s[i-1] == s[i]){
		++cnt; 
		if(s[i-1] == 'a') s[i-1] = 'b';
		else s[i-1] = 'a';
	}
	}
	cout<<cnt<<endl;
	cout<<s<<endl;
	return 0;
}
