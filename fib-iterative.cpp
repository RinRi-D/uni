#include "bits/stdc++.h"
 
using namespace std ;
 
int main(int argc, char *argv[])
{
    int n ;
    cin >> n ;

    auto t1 = chrono::high_resolution_clock::now();


    int a = 0, b = 1 ;
    for(int i = 0 ; i < n ; ++i)
    {
        int temp = b ;
        b = a+b, a = temp;
    }
    cout << a << '\n' ;
    

    auto t2 = chrono::high_resolution_clock::now(); 

    auto duration = chrono::duration_cast<std::chrono::nanoseconds>( t2 - t1 ).count();
	cout << "Time taken: " << duration << " nanoseconds\n";
}