 //BISMILLAHIR RAHMANIR RAHIM
/*
Do DEEN, keep SMILE :) 
 Author :: A R Ashik
.............CUET_CSE17.........
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <set>
#include<numeric>
#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <list>
#include <map>
#include <queue>
#include <sstream>
#include <utility>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define LL long long
#define ss second
#define rep(i,n) for(i = 0; i < n; i++)
#define REP(i,n) for(i=n;i>=0;i--)
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define ROF(i,a,b) for(int i = a; i >= b; i--)
#define re return
#define QI queue<int>
#define SI stack<int>
#define pii pair <int,int>
#define MAX
#define MOD
#define INF 1<<30
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define memo(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))

double const EPS=3e-8;
using namespace std;


template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }


// it will return the sum of the range
int arr_sum(int arr[],int i,int n){
	int sum_it = 0;
	for(int t = i; t < n; ++t){
		 sum_it += arr[t];
	}
	return sum_it;
}

int main(){
	
int n,i,sum_1st;
cin >> n;
int arr[n];

for(i = 0; i < n; ++i)
cin >> arr[i];

sort(arr,arr+n);
reverse(arr,arr+n);

sum_1st = arr[0];
for(i = 0; i < n; ++i){	
int sum_2nd =  arr_sum(arr,i+1,n);
if(sum_1st > sum_2nd){
cout << i+1;
return 0;
}
else 
sum_1st += arr[i+1];	
}

}

