class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>v; int n=matrix[0].size(),m=matrix.size();
    int top=0,left=0,right=n-1,bottom=m-1;
//first row : change in column
while(top<=bottom && left<=right)
{
for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
    
//last column : change in row
for(int i=top+1;i<=bottom;i++) v.push_back(matrix[i][right]);
if(top<bottom){
//last row : change in column
for(int i=right-1;i>=left;i--) v.push_back(matrix[bottom][i]);
}
//first column : change in row
if(left<right){
for(int i=bottom-1;i>top;i--) v.push_back(matrix[i][left]);
}top++; right--;left++; bottom--;}
    return v;}

};//time complessity: O(m*n) 