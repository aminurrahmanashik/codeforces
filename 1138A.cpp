// codeforces 1138A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n; // input length
	int a[n],cnt = 0;
	for(int  i = 0; i < n; ++i)  // input taken
	cin>>a[i];	
    vector<int>v;
    for(int i = 0; i < n; ++i){   // if '1' and '2' found consecutively
    	if(a[i] != a[i- 1]){
    		v.push_back(cnt); cnt =1;  // pushing the value of count
		}
		else ++cnt;
	}
    v.push_back(cnt);
	int ans = 0;
	if(v.size() > 1){
	int  x = v.size();
	for(int i = 0; i < x- 1; ++i)
		ans = max(ans,min(v[i],v[i+1]));   // checking the max value of the consecutive numbers
	}
		 cout<<ans*2<<"\n"; 
	return 0;
}
