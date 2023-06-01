class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd, even;
        int n = nums.size();
        
        for(int i : nums){
            if(i%2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }        
        
        int ctr=0;
        int index=0;
        
        while(ctr < n){
            nums[ctr++] = even[index];
            nums[ctr++] = odd[index++];
        }
        
        return nums;
    }
};