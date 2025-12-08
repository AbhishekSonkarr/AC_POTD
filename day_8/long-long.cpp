#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m; cin>>m;
    while(m--){
    int n; cin>>n;

    int count=0;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    long long sum=0;
    
    for(int i=0;i<n; i++){
    

        if(nums[i]==0 && i!=0)
        {
            nums[i]=nums[i-1]; continue;
        }
    
    if( nums[i]<0 && (i==0||nums[i-1]>=0))
    count++;
    sum+=llabs(nums[i]); 
    }
    cout<<sum<<" "<<count<<"\n";
    }
    return 0;
}