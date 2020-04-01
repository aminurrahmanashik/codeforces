#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ex[4],en[3],arr[3],i,x,ans;
	vector<pair<int , int> >vec;
	for(i=0;i<=3;i++){
		cin>>x;
		arr[i]=x;
		vec.push_back(make_pair(x,i));
	}
	for(i=0;i<3;i++)
	{
		cin>>ex[i];
	}
	
	sort(vec.begin(),vec.end());
	ans=0;
	for(i=0;i<3;i++)
	{
		ans=ans+ex[vec[i].second];
		en[vec[i].second]=ans;
	}
	cout<<"turnarround time"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<en[i]-arr[i]<<endl;
	}
	cout<<"waiting time"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<(en[i]-arr[i])-ex[i]<<endl;
	}
}

