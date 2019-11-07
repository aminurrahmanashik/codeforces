#include<bits/stdc++.h>
using namespace std;
int main(){
int q;  cin>>q;
while(q--){
	int n; cin>>n;
	int arr[n],cnt = 0;
	for(int i = 0; i < n; ++i)
	cin>>arr[i];
	sort(arr,arr+n);
   for(int i = 0; i < n-1; ++i){
   	int x = arr[i+1] - arr[i];
   	if(x == 1)
   	++cnt;
   }
   if(n==1) cout<<"1\n";	
    else if(cnt >= 1)  cout<<"2\n";
	else cout<<"1\n";
}
  return 0;
} 
