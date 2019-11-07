#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
	int n,m,cnt = 0; cin>>n>>m;
	vector<float>p; vector<float>q;
	for(int i = 0; i < n; ++i) {
    int a;  cin>>a; 
	p.push_back(a);
	}
    for(int j = 0; j < m; ++j) {
    int b;  cin>>b; 
	q.push_back(b);
	}
	for(int i = 0; i < n; ++i) {
	 for(int j = 0; j < m; ++j) {
	 	int x = (q[i] - p[i]);
	 	//cout<<"Ashik\n";
	 	if(x % 2 == 0) 
		 ++cnt;
	 }
}
cout<<cnt<<"\n";
}
}

