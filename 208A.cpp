//BISMILLAHIR RAHMANIR RAHIM
/*
Do DEEN, keep SMILE :) 
 Author :: A R Ashik
.............CUET_CSE17.........
 */
// codeforces problem:208A

#include<bits/stdc++.h>
using namespace std;

string str;
int pos;

int main(){
	cin>>str;
	// pos is keeping the index of the first occourace of "WUB"
	pos = str.find("WUB"); 
 
 while(pos != -1){
 	// finding "WUB" and replacing it with " " after 3 positions of pos finding
 	str.replace(pos,3," ");
 	pos = str.find("WUB"); // continued..
 }
 cout<<str;
 
 /* Another interesting implementation using regex,search it in web for details
 string str;
 cin>>str;
 regex fun("WUB");
 cout<<regex_replace(str,fun," ");
 */
 return 0;
}
