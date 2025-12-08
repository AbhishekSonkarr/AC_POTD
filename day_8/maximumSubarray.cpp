class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane method 
        int current = 0;  
        int maxSum= nums[0];
        int n =nums.size();
        for (int i =0; i<n;i++)
        {
            current = max(nums[i],current+nums[i]);
            maxSum=max(maxSum,current);
        }return maxSum;
    }
};