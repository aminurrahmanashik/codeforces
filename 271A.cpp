// cf-271A

#include<bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int num){
  // set it automatically removes the duplicates 
  set<int>myset;
  
  while(num > 0){  //  it's the time to insert the digits of the processing number
      int temp = num % 10;
      myset.insert(temp);
      num /= 10;
	  }

// set will not allow duolicates, so we should go for the distinct 4 digits	  
 if(myset.size() - 4 == 0)    
 return true;
 else 
 return false;
 
}


int main(){

int n; cin>>n;

  for(int i = n+1; i <= 9012; ++i){
      if(hasDistinctDigits(i)){
          cout<<i;
          break;
      }
  }
  return 0;
}
