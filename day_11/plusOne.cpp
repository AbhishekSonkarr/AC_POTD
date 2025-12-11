class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int n = digits.size();
        int sum = 0, carry = 0;
        vector<int> result;
        sum = digits[n - 1] + 1;
        result.push_back(sum%10);
        carry =sum/10;
        int i =n-2;
        while(i>=-1)
        {
            if(i >=0)
            {
                    sum = digits[i]+carry;
                    carry = sum/10;
                    result.push_back(sum%10); 
            }else if (carry >0){result.push_back(carry);};
            i--;
        }
        reverse(result.begin(),result.end());
 return result; }
};
//time complexity O(N)
