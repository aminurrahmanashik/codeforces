// Bismillahir Rahmanir Rahim
//cf-101908D

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,cnt = 0; cin>>N;
	while(N--){
		int num; cin>>num;
		if(num!=1) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
