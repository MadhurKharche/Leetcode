class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int maxtemp=0;

        int i=0;
        while(i<nums.size()){
            maxtemp = maxtemp + nums[i];
            
            if(ans < maxtemp)
                ans = maxtemp;
            if(maxtemp<0)
                maxtemp=0;
            i++;
        }

        return ans;
    }
};