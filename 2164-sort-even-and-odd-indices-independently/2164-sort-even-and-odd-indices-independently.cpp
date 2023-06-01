class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            if(i%2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        
        sort(even.begin() , even.end());
        sort(odd.begin() , odd.end(), greater<>());
        
        int index=0, ctr=0;
        
        while(ctr < n/2 * 2){
            nums[ctr++] = even[index];
            nums[ctr++] = odd[index++];
        }
        
        if(ctr < n)
            nums[ctr] = even[index];
        
        return nums;
    }
};