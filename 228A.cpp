// Bismillahir Rahmanir Rahim
// cf-228A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  set<int>s;
  for(int i = 0 ; i < 4; ++i){
  	ll num;  cin>>num;
    s.insert(num);
}
cout<<4-s.size()<<endl;
return 0;	
}
