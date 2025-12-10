class Solution {
public:
    string addStrings(string num1, string num2) {
        string s="";
        int i=num1.size()-1,j=num2.size()-1,sum=0,carry=0;
        while (i>=0 || j>=0 || carry>0)
        {
            int sum =carry;
            if(i>=0) sum += num1[i--]-'0';
            if(j>=0) sum += num2[j--]-'0';
            carry=sum/10;
            s.push_back((sum%10)+'0');
        }reverse(s.begin(),s.end());
    return s;}
};

//time complexity O(N)