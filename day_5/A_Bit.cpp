#include<iostream>
#include<string>
using namespace std;

int main()
{
    int sum=0;
    int n; cin >>n; // to input no. of oprations 
    while(n--)
    {   
        int X=0;//variable 
        string m; cin>>m;//to input the operation
    /* statement to execute */
        if(m == "++X") {++X;}
        else if(m == "X++") {X++;}
        else if(m == "--X") {--X;}
        else if(m == "X--") {X--;}
        sum +=X;
    }cout<<sum;

    return 0;
}
//time complexity -> O(n)