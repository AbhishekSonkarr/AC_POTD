class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v(m,vector<int>(n));
        if(n*m!=original.size()) return v={};
        int s=0;
        for (int i = 0; i < m; i++) {
           
            for (int j=0; j < n; j++) {
                v[i][j]=original[s++];
            }
        }
        return v;
    }
};//Time complexity: O(m*n) 