#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d,k,T;
	cin>>T;
	while(T--){
		cin>>a>>b>>c>>d>>k;
		double x = a/c;  double y = b/d;
		int pen = ceil(x); int pcl = ceil(y);
		if((pen+pcl)>k)
			cout<<"-1\n";
		else {
			cout<<pen<<" "<<k-pen<<"\n";
		}
	}
	return 0;
}
