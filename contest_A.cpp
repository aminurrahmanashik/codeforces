// cf 1237A... only math..
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n],t = 1;;
  for(int i = 0; i < n; ++i){
  int x;  cin>>x; 
  if(x%2 != 0){
  	 int pwr = pow(-1,t);
    a[i] = (x+pwr)/2;  ++t;
  } 
  else a[i] = x/2;
}
//for(int i = 0; i <  n; ++i)
//cout<<a[i]<<"\n";

for(int i = 0; i <  n; ++i)
cout<<a[i]<<"\n";
return 0;
}
