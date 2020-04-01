// Bismillahir Rahmanir Rahim
// CF-732A

#include<bits/stdc++.h>
using namespace std;

int main(){
  int k,r,i;
  cin>>k>>r;
  
  for(i = 1 ; i <= 9; ++i){
  	int div = k*i;
  	if(div % 10 == r || div % 10 == 0)  break;
  }
  cout<<i<<endl;
  return 0;	
}
