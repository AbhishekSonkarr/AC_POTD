class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) 
    {
        sort(arr.begin(),arr.end()); 
        sort(dep.begin(),dep.end());
        
        int i=0,j=0;
        int n=arr.size();
        int maxx=0, count =0; 
        while (i<n && j<n)
        {
            if (arr[i]<=dep[j]) 
            {
                count ++; //to count no. of platform require
                maxx = max(maxx,count); 
                i++;
            }else 
            {
                j++;
                count --; // when there is departure
            }
            
            
        }return maxx;    
    }
};
//time complexity O(n log n)