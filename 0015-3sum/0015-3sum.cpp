class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> set;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int fixed=0; fixed<=n-3; fixed++){
            int start = fixed+1;
            int end = n-1;
            
            while(start<end){
                int sum = nums[fixed] + nums[start] + nums[end];
                
                if(sum==0){
                    vector<int> v{nums[fixed],nums[start],nums[end]};
                    
                    if(set.count(v) == 0)
                        ans.push_back(v);
                    set.insert(v);
                    start++;
                    end--;
                }
                else if(sum > 0){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        
        return ans;
    }
};