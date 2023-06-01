class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        unsigned int sum = (n*(n+1))/2;
        
        int arrs = 0;
        
        for(int i : nums)
            arrs += i;
        
        return sum-arrs;
    }
};