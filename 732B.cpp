#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,cnt = 0;
   cin>>n>>k;  
   int a[500];
   for(int i = 0; i < n; ++i)
   cin>>a[i];
   
   for(int i = 0; i < n; ++i){
   	int x = a[i]+a[i+1];
   	if(x < k){
   	cnt += k-x;  a[i+1] += cnt;
   }
}
  cout<<cnt<<"\n";
for(int i = 0; i < n; ++i)
   cout<<a[i]<<" ";
return 0;
}
 
