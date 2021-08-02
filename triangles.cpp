/*
#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
*/
#include "bits/stdc++.h"
 
#define iosb ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define BIT(x) __builtin_popcount(x)
#define all(x) x.begin() , x.end()
#define F first
#define S second
#define pb push_back
 
using namespace std ;
 
typedef unsigned long long UL ;
typedef long long L ;
typedef string T ;
typedef int I ;
 
const I MaxN =      1e5+1 ;
const I MOD =       1e9+7 ;
const I inf =       2e9+7 ;
const L INF = 2e18+7 ;
 
int32_t main(int argc, char *argv[])
{
    if(argc > 1)
        freopen(argv[1], "r", stdin) ;
    //freopen(".in" , "r" , stdin) ;
    //freopen(".out" , "w" , stdout) ;
    

    double a, b, c, x1, y1, x2, y2, x3, y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    a = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2)),
    b = sqrt((x1-x3) * (x1-x3) + (y1-y3) * (y1-y3)),
    c = sqrt((x2-x3) * (x2-x3) + (y2-y3) * (y2-y3));
    if(a + b > c && b + c > a && c + a > b)
    {
        cout << "YES\n" ;
        double s = (a+b+c)/2.0 ;
        cout << sqrt(s*(s-a)*(s-b)*(s-c)) << '\n' ;
    }
    else
        cout << "NO\n" ;
}