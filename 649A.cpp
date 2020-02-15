#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,p,q;  cin>>n;
    cin>>p;
    set<int>set_it;

    while(p--){
    	int a; cin>>a;
    	set_it.insert(a);
	}
	
    while(p--){
    	int a; cin>>a;
    	set_it.insert(a);
	}
	
	int  ans = set_it.size();
	
	if(n == set_it.size())
	cout<<"I become the guy.\n";
	else cout<<"Oh, my keyboard!\n";
	
	return 0;
}
