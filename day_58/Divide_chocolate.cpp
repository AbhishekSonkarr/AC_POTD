#include <bits/stdc++.h>
int getMaximumSweetness(vector<int> &arr, int k/*no. of friends*/)
{
    int high=0;
    int low=arr[0];

    //setting range for BS
    for(int x: arr)
    {
        high+=x;
        low=min(low,x);
    }


    int n; n=arr.size();
    long long total =k+1;
    long long mid=0;
    long long ans=0;

    //search (BS)
    while(low <=high)
    {
        long long sum=0;
        long long count=0;
        mid = (low+high)/2;
        //cheking parttions
        for(int i =0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>=mid)
            {
                sum=0;
                count++;
            }
        }
        if(count>=k+1)
        {
            ans=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }



    return ans;
}
