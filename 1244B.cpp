// codeforces 1244B..

/*
#include <bits/stdc++.h>
 
using namespace std ;
 
#define N 100005
#define pb push_back
#define ll long long
#define mod 1000000007
#define pll pair<ll, ll>
#define double long double
#define fi first
#define se second
#define INF 10000000000000000
#define Base 1200
 
int main(){
    ios_base :: sync_with_stdio(false);
    int testcase;
    string s;
    int n;
    cin >> testcase;
    while(testcase--){
        cin >> n;
        cin >> s;
        int ans = n;
        for(int i = 0 ; i < n ; i ++){
            if(s[i] == '1'){
                ans = max(ans , max(i + 1 , n - i) * 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
 */
 
 // my solution
#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int T;
 	cin>>T;
 	char s[1010];
 	for(int t = 0; t < T; ++t){
 	int n,frd,brd,i,cnt = 0; 
 	cin>>n;
 	scanf("%s",s+1);
 	for(i = 0; i < s[i] ; ++i){
 		if(s[i] == '1'){
 			frd = i;
 			break;
		 }
		 else ++cnt;
	}
	
for(i = (n-1); i >= 0 ; --i){
   if(s[i] == '1'){
 			brd = i;
 			break;
		 }
}

int maximum = max((n - frd - 1),brd);
if(cnt == n){
cout<<n<<"\n";
// break;
}

  else if(frd == 0 || brd == (n-1)){
 		cout<<2*n<<"\n";
 		// break;
	 }
	 else {
	    cout<<2*(maximum+1)<<"\n";
	    // break;
	}
 }
 return 0;
}


