#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin>>n;
	string s; cin>>s;
	
	int cnt1 = 0, cnt2 = 0;
	int num = s.length();
	
	for(int i = 0; i < num; ++i){
		if(s[i] == 'D')
		++cnt1;
		else  ++cnt2;
	}
	
	if(cnt1 == cnt2)
	cout<<"Friendship"<<endl;
	
	else if(cnt1 > cnt2)
	cout<<"Danik"<<endl;
	
	else cout<<"Anton"<<endl;
	
	return 0;
}
