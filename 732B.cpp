#include<bits/stdc++.h>
using namespace std;

int a[510];
int main(){
   int n,k,store = 0,cnt;
   cin>>n>>k;  
   
   for(int i = 0; i < n; ++i)
   cin>>a[i];
   
   for(int i = 0; i < n -1; ++i){
   	int x = a[i]+a[i+1];
//   	cout<<"Values x:\n";
//   	cout<<x<<endl;
   	cnt = 0;
   	if(x < k){
   	cnt = k-x;
	a[i+1] += cnt; 
	store += cnt;
//	cout<<"Values a[i+1]:\n";
//	cout<<a[i+1]<<endl;
   }
}
  cout<<store<<"\n";
for(int i = 0; i < n; ++i)
   cout<<a[i]<<" ";
return 0;
}
