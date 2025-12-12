class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        size_t  minLen = strs[0].size();
        for(auto &i: strs)
        minLen=min(minLen,i.size());
        
        int i=0,j=0,count=0;
        string result;
        
        for(int i=0;i<minLen;i++)
        {
            char c =strs[0][i];
            bool check = true;

            for(int j=0;j<n;j++)
            {
                if(strs[j][i]!=c)
                {
                    check=false; 
                    break;
                }
            }
        
        if(!check) break;
        
        result.push_back(c);
        
        }
       
            
        
    return result;}
};//time complexity O(N*M)