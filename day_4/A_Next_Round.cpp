#include<iostream>
using namespace std;

int main (){


    int n,m; cin>>n>>m;
    int score=0;
    int arr[n]; 

/* to input scores */
    for (int i=0; i<n; i++) 
    {
        
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(arr[i] >= arr[m-1] && arr[i]>0) score++; // to check if its greater than given rank and positive
    }
    cout<<score;
    return 0;
}