#include<bits/stdc++.h>
	using namespace std;
	
	
	void puzzles(int n, int m,int f[]){
		
		int minimum = INT_MAX;
		
		// we need to check for extra (m-n) numbers campare with smallest
		// if there is minimum no of difference
	   for(int i = 0 ; i <= m-n; ++i){
	        
			minimum = min(minimum,(f[i+n-1] - f[i]));
	   }
		
		cout<<abs(minimum)<<endl;	
	}
	int main(){
	
	int n,m;
	cin>>n>>m;
	int f[m];
	
	for(int i = 0; i < m; ++i)
		cin>>f[i];
	
	sort(f,f+m);
	puzzles(n,m,f);
	 
	 return 0; 
	}
