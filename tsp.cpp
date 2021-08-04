#include "bits/stdc++.h"

using namespace std ;

const int MaxN = 1e3+1 ;
const int inf = 1e9+7 ;
 
int a[MaxN][MaxN];

int main(int argc, char *argv[])
{

    int n ;
    cin >> n ;
    vector<int> p, path;

    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
            cin >> a[i][j] ;
        
        if(i > 0)
            p.push_back(i) ;
    }

    /* brute-force every single permutation and count the length */
    int mnLen = inf ;
    do{
        int len = 0, cur = 0 ;
        
        for(int i = 0 ; i < p.size() ; ++i)
        {
            len += a[cur][p[i]] ;
            cur = p[i] ;
        }

        if(cur != 0)
            len += a[cur][0] ;
        
        if(len < mnLen)
        {
            mnLen = len ;
            path.clear() ;
            path.push_back(0) ;
            for(auto i : p)
                path.push_back(i) ;
            path.push_back(0) ;
        }
    } while(next_permutation(p.begin(), p.end())) ;

    /* Print the answer */
    cout << mnLen << '\n' ;
    for(auto i : path)
        cout << i << ' ' ;
    cout << '\n' ;
}