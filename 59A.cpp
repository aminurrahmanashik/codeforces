#include<bits/stdc++.h>
using namespace std;

int cnt_UP = 0, cnt_LOW = 0;
int main(){
  string s;
  cin>>s;
  
  int sz = s.length();
  for(int i = 0; i <sz; ++i){
  	if(isupper(s[i])) 
	  cnt_UP++;
	  else cnt_LOW++;
	 }
	 
	 if(cnt_UP > cnt_LOW)
	 	transform(s.begin(), s.end(), s.begin(), ::toupper);
	 	else 
	 	transform(s.begin(), s.end(), s.begin(), ::tolower);
	 
	 cout<<s;
	 return 0;
}
