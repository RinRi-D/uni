#include "bits/stdc++.h"
#include <chrono>
 
using namespace std ;

int fib(int n)
{
    if(n == 0)
        return 0 ;
    if(n == 1)
        return 1 ;
    return fib(n-1) + fib(n-2) ;
}

int main(int argc, char *argv[])
{
    int n ;
    cin >> n ;

    auto t1 = chrono::high_resolution_clock::now();
    

    cout << fib(n) << '\n' ;


    auto t2 = chrono::high_resolution_clock::now(); 

    auto duration = chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();
	cout << "Time taken: " << duration << " nanoseconds\n";
}