 //BISMILLAHIR RAHMANIR RAHIM
/*
Do DEEN, keep SMILE :) 
 Author :: A R Ashik
.............CUET_CSE17.........
 */
// codeforces 405A

#include<bits/stdc++.h>
using namespace std;

int arr[105];
int main(){
	
	int n; cin>>n;
	for(int i = 0; i < n; ++i)
	cin>>arr[i];
	
	sort(arr,arr+n);
	
	for(int i = 0; i < n; ++i)
	cout<<arr[i]<<" ";
	
	return 0;
}


