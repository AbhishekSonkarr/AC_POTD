#include<iostream>
#include<vector>
using namespace std;

int main(){

     ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    
    while(t--)
    {
        int n; cin>>n;
        int x=n/2;
        //to check if equal sum possible or not
        if(n%4!=0) 
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        int arr[n];
        int sum_even=0,sum_odd=0;

        for(int i =0; i<x; i++)
        {
            arr[i]=2*(i+1);
            sum_even+=arr[i];
        }

        for(int i=0;i<x-1;i++)
        {
            arr[x+i]=(2*i)+1;
            sum_odd+=arr[x+i];
        }

        // to find last odd digit to make sum equal on both side
        arr[n-1]=sum_even-sum_odd;

        for(int i: arr)
        cout<<i<<" "; 
        cout<<endl;
    }

    return 0;
}