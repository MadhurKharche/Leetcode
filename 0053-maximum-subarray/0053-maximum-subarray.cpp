class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int mAns = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            ans += nums[i];
            
            mAns = max(mAns, ans);
            
            if(ans < 0)
                ans = 0;
        }
        
        return mAns;
    }
};