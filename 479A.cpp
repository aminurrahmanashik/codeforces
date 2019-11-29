#include<bits/stdc++.h>
using namespace std;
 
 int arr[20];
 
int main(){
 	int a,b,c;
 	cin>>a>>b>>c;
 	
 	 arr[0] = a+(b*c);
     arr[1] = a*(b+c);
 	 arr[2] = a*b*c;
 	 arr[3] = a+b+c;
 	 arr[4] = (a+b)*c;
 	 arr[5] = (a*b)+c;
 	
 	int mxm = 0;
 	for(int i = 0; i < 6;++i){
 		mxm = max(mxm,arr[i]);
	 }
	 cout<<mxm;
	 return 0;
 }
