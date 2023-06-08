class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        
        int n = grid[0].size();
        
        for(int i=0; i<grid.size(); i++){
            int start=0, end = n-1;
            
            while(start<=end){
                int mid = start+ (end-start)/2;
                
                if(grid[i][mid]<0){
                    ans += end-mid+1;
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
        }
        
        return ans;
    }
};