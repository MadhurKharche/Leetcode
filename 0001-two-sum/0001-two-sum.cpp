class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int n1, n2;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
            if(map[target - nums[i]] > 0){
                n1 = i;
                n2 = find(nums.begin(), nums.end(), target - nums[i]) - nums.begin();
                if(n1==n2)
                    continue;
                break;
            }
        }
        vector<int> res;
        res.push_back(n1);
        res.push_back(n2);
        return res;
    }
};