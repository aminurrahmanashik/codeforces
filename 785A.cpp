// Bismillahir Rahmanir Rahim
// cf-785A
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,face = 0; cin>>n;
  while(n--){
  	 string s; cin>>s;
    if(s == "Tetrahedron") 	face += 4;
    else if(s == "Cube") 	face += 6;
    else if(s == "Octahedron") 	face += 8;
    else if(s == "Dodecahedron") 	face += 12;
    else face += 20;
  }
   cout<<face<<endl;
return 0;	
}
