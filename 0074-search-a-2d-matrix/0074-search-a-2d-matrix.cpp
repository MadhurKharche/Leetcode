class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto i : matrix){
            int start=0, end = i.size()-1;
            sort(i.begin(),i.end());
            
            while(start<=end){
                int mid = (start+end)/2;
                
                if(i[mid]==target)
                    return true;
                else if(i[mid]>target)
                    end = mid-1;
                else
                    start = mid+1;
            }
        }
        
        return false;
    }
};