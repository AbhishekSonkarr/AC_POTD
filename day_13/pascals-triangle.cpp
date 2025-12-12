class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> result;
    
            result.push_back({});
            result[0].push_back(1);
            
         if(numRows>1)
        {   
            result.push_back({});
            result[1].push_back(1);
            result[1].push_back(1);
          for(int i=2;i<numRows;i++)
            {
                result.push_back({});
                result[i].push_back(1);
               
                for(int j=1;j<result[i-1].size();j++)
                {
                    int c = result[i-1][j-1]+result[i-1][j];
                    result[i].push_back(c);
                }result[i].push_back(1);
            }
        }
        return result;}
    };//time complexity O(N*M)