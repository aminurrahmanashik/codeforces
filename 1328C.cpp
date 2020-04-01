// Bismillahir Rahmanir Rahim
// cf-1328C
 
#include<bits/stdc++.h>
using namespace std;
int t,n;
char s[50010],a[50010],b[50010];

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%s",&n,s), a[n]=b[n]='\0';
		bool e = false;
		for(int i = 0; i<n; ++i){
		  if(!e){
		  	if(s[i]=='0') a[i]=b[i]='0';
			if(s[i]=='1') a[i]='1',b[i]='0',e=true;
			if(s[i]=='2') a[i]=b[i]='1';
		  } else  a[i]='0', b[i]=s[i];
	}
	printf("%s\n%s\n",a,b);
	}
}
