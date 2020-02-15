// Bismillahir Rahmanir Rahim
// 469A cf(EASY)


#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,p,q;  cin>>n;
    set<int>s;
    //set<int> :: iterator it;
    cin>>p;
    for(int i = 0; i < p; ++i){
    	int a; cin>>a;
    	s.insert(a);
	}
	
	cin>>q;
    for(int j = 0; j < q; ++j){
    	int b; cin>>b;
    	s.insert(b);
	}
	
	if(n == s.size())
	cout<<"I become the guy.\n";
	else cout<<"Oh, my keyboard!\n";
	
	return 0;
}
