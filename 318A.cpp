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

vector<long long>v;
long long i,j,even,odd,n,k;
void solve(long long even,long long odd,vector<long long>v,long long k){

	for(i = 1,j = 1; j <= odd; i += 2, ++j)
		v.push_back(i);

	for(i = 2,j = odd+1; i <= n; i += 2, ++j)
		v.push_back(i);
}

int main(){

 cin>>n>>k;
 
 if(n%2 == 0)
 even = odd = n/2;
 else
 even = (n-1)/2; odd = n - even;
 
 solve(even,odd,v,k);	
 return 0;
}

