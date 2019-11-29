#include<bits/stdc++.h>
using namespace std;

int main(){
  char s[110];
  gets(s);
  int len = strlen(s);
  
if(islower(s[0])){
	for(int  i = 1; i < len; ++i){
  	if(islower(s[i])){
  	 puts(s);
  	 return 0;
       }
    }
}

else{
		
  	for(int i = 1; i < len; ++i){
		
		if(islower(s[i])){
				puts(s);
				return 0;
			}
		}
	}
		// printing the string
		for(int  i = 0; i < len; ++i){
			if(s[i] >= 97 && s[i] <= 122)
			cout<<char(s[i]-32);
			else cout<<char(s[i]+32);
		}
  }
