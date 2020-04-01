// Bismillahir Rahmanir Rahim
// cf-6A
#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5];
	
	for(int i = 0; i < 4; ++i)
	cin>>arr[i];
	sort(arr,arr+4);
	
	if((arr[0]+arr[1] > arr[2]) || (arr[1]+arr[2] > arr[3]))
	cout<<"TRIANGLE\n";
	else if((arr[0]+arr[1] == arr[2]) || (arr[1]+arr[2] == arr[3]))
	cout<<"SEGMENT\n";
	else cout<<"IMPOSSIBLE\n";
	
	return 0;
}

