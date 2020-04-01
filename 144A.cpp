// Bismillahir Rahmanir Rahim
// cf-144A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,max = 1,min =1;
	cin>>n;
	int c[n+5];
	cin>>c[1];
	for(int i=2;i<=n;i++){ 
		cin>>c[i];
		if(c[max]<c[i]) max=i;
		if(c[min]>=c[i]) min=i;
	}
	if(min<max){
		cout<<n-min+(max-1)-1;
	}else cout<<(n-min)+max-1;
	
}
