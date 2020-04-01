// Bismillahir Rahmanir Rahim
// CF-25A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int num_even = 0, num_odd = 0;
	int Index_even,Index_odd;
	for(int i = 1;  i <= n; ++i){
		int num; cin>>num;
		if(num%2 == 0){
			num_even++;
			Index_even = i;
		}
		else {
			num_odd++;
			Index_odd = i;
		}
	}
	if(num_even == 1)
	cout<<Index_even<<endl;
	else  cout<<Index_odd<<endl;
	return 0;
}
