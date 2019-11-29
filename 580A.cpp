
#include<bits/stdc++.h>
using namespace std;
/*
vector<int>v;

// function that calcuated the LIS of the taken vector
int LIS(vector<int> const&a){   // '&' else it would be a copy of vector for unchanged effect
  
  int sz = a.size();  // size of the array
  vector<int> dp(sz,1);	 // new vector dp will store the length of the sequences initially storing 1
  
  for(int i = 0; i < sz; ++i){  
  	for(int j = 0; j < i; ++j){
  		// a[] is the vector received by the function
  		if(a[j] < a[i])
	    dp[i] = max(dp[i],dp[j]+1);
	  }
  }
  
  // it's the time to do comprison for max length
  int ans = dp[0];
  for(int i = 1; i < sz; ++i){ // i = 1 as we've taken i = 0 inside dp[0]
  	ans = max(ans,dp[i]);
  }
  return ans;
}

int main(){
	int n;
	cin>>n;
	
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	int lis = LIS(v);
	cout<<lis<<"\n";
	
}

*/
#include<bits/stdc++.h>
using namespace std;

long long i,j,k,n,ans = 0,a[100023];

int main(){
	cin>>n;
	
	for(i = 0; i < n; ++i)
	cin>>a[i];
	
	k = 1;
	for(i = 1; i < n; ++i){
		if(a[i] >= a[i-1])
		k++;
		else{
		 ans = max(ans,k); 
		 k = 1; 
	}
}
	ans = max(ans,k);
	cout<<ans<<"\n";
}
/*
another easy implementation..
#include<iostream>
using namespace std;
int main()
{
	int n,s=1,l=1,a,b,i;
	cin>>n;
	cin>>a;
	for(i=1;i<=n-1;i++)
	{
		cin>>b;
		if(b>=a)
		{
		++l;if(l>s) s=l;
		}
		else
		l=1;
		a=b;
	}
	cout<<s;
}
*/
