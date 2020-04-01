// Bismillahir Rahmanir Rahim
// cf-443A

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  bool test[30]={false};
  int cnt = 0;
  int len = s.length();
  if(len<3) {
  	cout<<0<<endl; return 0;
  } 
  else{
  	for(int i = 1; i < len-1; ++i){
  			if(s[i]>='a'&&s[i]<='z'){
			  if(test[s[i]-'a'] == false){
			     test[s[i]-'a'] = true;
			     ++cnt;
			  }
	  }
  }
}
cout<<cnt<<endl;
return 0;	
}
