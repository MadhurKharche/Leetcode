class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(nums[index] == nums[i]){
                continue;
            }
            else{
                nums[++index] = nums[i];
            }
        }
        
        return ++index;
    }
};