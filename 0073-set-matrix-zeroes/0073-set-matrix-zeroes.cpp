class Solution {
public:
    void sZero(vector<vector<int>>& matrix, int row,int col){
        fill(matrix[row].begin(), matrix[row].end(), 0);
        
        for(int i=0; i<matrix.size(); i++){
            
            matrix[i][col]=0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
       vector<vector<int>> ans = matrix;
        
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                if(ans[i][j]==0){
                    sZero(matrix,i,j);
                    
                }
            }
        }
    }
};