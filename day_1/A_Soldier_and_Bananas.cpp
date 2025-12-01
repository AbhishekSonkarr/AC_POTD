#include<iostream>
using namespace std;

int main ()
{
int to_cost=0,k,n,w,borrow;

cin >> k;
cin >> n; 
cin >> w;
    for (int i =1; i<=w; i++)
{
    to_cost += i*k;
}
borrow = to_cost-n;

if(borrow<0) cout<<"0";
else cout<<borrow<<endl;

return 0;
}