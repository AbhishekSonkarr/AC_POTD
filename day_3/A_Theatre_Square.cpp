#include<iostream>
#include<cmath> //to use ceil function
using namespace std;

int main()
{
    long long n , m , a; //to take larger integer input
    cin>> n >> m >> a;

    cout  << (long long)((n+a-1)/a) *((m+a-1)/a);  //ceil function cause precision issue so i used ceil division formula 
    return 0;
}

// time complexity O(1)